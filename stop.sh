#!/bin/bash

systemctl stop pestilence.service
systemctl disable pestilence.service
rm -rf /etc/systemd/system/pestilence.service