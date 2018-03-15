# Praktikum-SDA

This repository contains the codes for Data Structure & Algorithm Lab tasks and/or exercise.

Each directory consists one person's own code files.

Read this DOCUMENTATION carefully before you get started. :wink:

Table of Contents:
- [Environment Preparation](https://github.com/TI1NF/Praktikum-SDA#environment-preparation)
  - [Debian/Ubuntu-based System](https://github.com/TI1NF/Praktikum-SDA#debianubuntu-based-system)
    - [Installaion](https://github.com/TI1NF/Praktikum-SDA#installation)
  - [Arch-based System](https://github.com/TI1NF/Praktikum-SDA#arch-based-system)
    - [Installation](https://github.com/TI1NF/Praktikum-SDA#installation-1)
    
# Environment Preparation

Note that current needs are just for **C++** programming language. As for **Java** for the next level, this documentation will be updated accordingly.

## Debian/Ubuntu-based System

Compiler:

Package Name | Description
------------ | -------------
`g++` | GNU C++ Compiler


Install one of your prefered Text Editor or IDE:

Package Name | Description
------------ | -------------
`gedit` `gedit-plugins` | GNOME text editor + its plugins
`geany` | lightweight and customizable IDE
`codeblocks` | cross-platform Dev-C++ alike IDE
`vim` `vim-gui` | popular Unix keyboard-driven text editor
`emacs` | fully-featured keyboard-driven text editor
`nano` | simple cli text editor

Other Text Editor/IDE outside Debian/Ubuntu repository:

Name | Description
------------ | -------------
Sublime Text | proprietary freemium text editor
Atom | hackable and open-source text editor powered by GitHub
Komodo Edit | cross-platform and multilingual text editor & IDE
Brackets | text editor powered by Adobe corp.
Visual Studio Code | text editor powered by Microsoft corp.

### Installation

`sudo apt update`

`sudo apt install <package_name_1> <package_name_2> <package_name_n>`

Example: 
`sudo apt install g++ codeblocks`

## Arch-based System
The packages are the same as on Debian/Ubuntu repository.

Other Text Editor/IDE:
- Atom (AUR) 
- Komodo Edit (AUR) 
- Brackets (AUR)
- Visual Studio Code (AUR)

### Installation
```
sudo pacman -Sy`
sudo pacman -S <package_name_1> <package_name_2> <package_name_n>
```

Example: 
`sudo pacman -S g++ codeblocks`
