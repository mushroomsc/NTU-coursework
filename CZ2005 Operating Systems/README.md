# NachOS 3.4 for Ubuntu 18.04

---

## Why do I get Errors like `../Makefile.common:161: arch/intel-i386-linux/depends/main.d: No such file or directory`? ##

- Outdated gcc and g++ packages

## Solution ##
    sudo apt-get install build-essential
    sudo apt-get install g++-multilib
	sudo apt-get install gcc-multilib
    make

## possible error ##
    E: Could not get lock /var/lib/dpkg/lock

## Solution ##
- This might be due to other programs trying to update Ubuntu.
- Check by the command `ps aux | grep -i apt`
- if you see `apt.systemd.daily update`, it means that Ubuntu is trying to update itself. 
- Simply wait for a few minutes can solve the issue.


