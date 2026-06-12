
#include <unistd.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/file.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <pwd.h>
#include <sys/types.h>
#include <grp.h>
#include <sys/types.h>
#include <sys/xattr.h>
#include <time.h>
#include <errno.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


char	*strjoin(char const *s1, char const *s2);
char *remove_last_n(char *str, size_t n);

int main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("Error, no av\n");
		return 0;
	}
	if (!strcmp(av[2], "encrypt"))
	{

		int fd = open(av[1], O_WRONLY | O_APPEND);
		if (fd < 0)
			return 0;
		char *renameFile = strjoin(av[1], ".pestilence");
		int fdcheck = open(renameFile, O_RDONLY);
		if (fdcheck != -1)
		{
			printf("Error, file already exist");
			close(fd);
			close(fdcheck);
			return 0;
		}
		int randomData = open("/dev/urandom", O_RDONLY);
		if (randomData < 0)
		return 0;
		char myRandomData[32];
		ssize_t result = read(randomData, myRandomData, sizeof myRandomData);
		if (result < 0)
		return 0;
		write(fd, myRandomData, 32);
		printf("\n");
		fd = rename(av[1], renameFile);
	}
	else if (!strcmp(av[2], "decrypt"))
	{
		int fd = open(av[1], O_RDWR);
		if (strlen(av[1]) <= 11)
			return 0;
		if (strcmp(&av[1][strlen(av[1]) - 11], ".pestilence") != 0)
			printf("Error, bad extenstion file\n");
		char *renameFile = remove_last_n(av[1], 11);
		printf("%s\n%s\n", renameFile, av[1]);
		int fdcheck = open(renameFile, O_RDONLY);
		if (fdcheck != -1)
		{
			printf("Error, file already exist");
			close(fd);
			close(fdcheck);
			return 0;
		}

		char nonce[32];
		lseek(fd, -32, SEEK_END);
		read(fd, nonce, 32);
		printf("nonce: %s", nonce);
		off_t taille = lseek(fd, 0, SEEK_END);
		ftruncate(fd, taille - 32);
		off_t taille_corps = lseek(fd, 0, SEEK_END) - 32;
		lseek(fd, 0, SEEK_SET);
		fd = rename(av[1], renameFile);
	}
	else
		printf("Error, no encrypt/decrypt\n");
}