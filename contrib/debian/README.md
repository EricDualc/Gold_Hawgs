
Debian
====================
This directory contains files used to package auhd/auh-qt
for Debian-based Linux systems. If you compile auhd/auh-qt yourself, there are some useful files here.

## auh: URI support ##


auh-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install auh-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your auhqt binary to `/usr/bin`
and the `../../share/pixmaps/auh128.png` to `/usr/share/pixmaps`

auh-qt.protocol (KDE)

