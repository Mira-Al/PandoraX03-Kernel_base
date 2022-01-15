# PandoraX03-Kernel_base
This repository is an help for user that want to create their own Kernel  
To create the iso file, you may use the command I let you :  
```
$ nasm -f elf32 boot.asm -o boot.o
$ gcc -m32 -c kernel.c -o kernel.o
$ gcc -m32 -c keyboard.c -o keyboard.o
$ gcc -m32 -c source.c -o source.o
$ ld -m elf_i386 -T linker.ld -o kernel boot.o kernel.o keyboard.o source.o
```  
### Build the Iso
```
mkdir -p iso/boot/grub
cp kernel iso/boot/
cp grub.cfg iso/boot/grub/
grub-mkrescue -o pandorax03.iso iso/

```  


To install your iso file on USB just use balena etcher:  
[Etcher](https://www.balena.io/etcher/)  
