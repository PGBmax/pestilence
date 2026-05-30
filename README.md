<div align="center">
  <h1>🦠 Pestilence</h1>
  <p>42 Post-CC</p>
</div>
<br/>

<div align="center">

![Static Badge](https://img.shields.io/badge/os-linux-orange)
![Static Badge](https://img.shields.io/badge/language-C99-blue)
![Static Badge](https://img.shields.io/badge/C2%20port-6942-red)
![Static Badge](https://img.shields.io/badge/auth-SHA--256-purple)

</div>

---

# Todo List:

## (Mandatory Part)
- Verify if the code doesn't execute if you try to use a debugger to run it.
- Make the code won't execute if a specific process is active on the target machine.
- when a manual modification on the virus in order to avoid the anti- debugging
launching is made, the infection routine must be partly obfuscated.
In regards of the latest point difficulty, the goal will simply be to make the reading and
understanding of your infection routine difficult for a physical person. Being an actual
issue in the real world, the obfuscation level will have an influence on your final grade.


## (Bonus Part)
- Upgrade Encrypt and Decrypt command, for making files harder to reverse ingenering.
	- Encrypt should use a rand() num as a second key to hash the file and add the key to the hashed file, and rename the file with .pestilence
	- Decrypt should find the rand() num, remove it from the hashed file, hash the file and remove the .pestilence from file.
- Add command for somethings idk


> **⚠️ Educational purposes only. Do not deploy on systems you do not own or have explicit permission to test.**

Made by **[mbatty](https://github.com/scorpionnem)** & **[pboucher](https://github.com/pgbmax)**.
