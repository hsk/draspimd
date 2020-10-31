all: #res/char.h
	#touch res/gfx2.res
	touch src/main.c
	make -f /opt/gendev-0.4.0/sgdk/mkfiles/makefile.gen 
#	blastem out/rom.bin
	picodrive out/rom.bin
ti:
	cd res/tile && make && touch gfx3.res
c:
	touch src/*
	make
b:
	blastem out/rom.bin
t:
	cd src; php bg_tbl.php
	#touch res/gfx.res
	make
res/char.h: db

r:
	touch res/*
	make all
db:
	cd gen/char; php mkimg.php
	touch src/boot/sega.s
m:
	cd gen/mu; php mkmov3.php
td:
	cd gen/char; swipl td.pl
	touch src/boot/sega.s

tes:
	/opt/gendev-0.4.0/bin/m68k-elf-gcc  -m68000 -Wall -fno-builtin -Iinc -Isrc -Ires -I/opt/gendev/sgdk/inc -I/opt/gendev/sgdk/res -B/opt/gendev/sgdk/bin -O3 -fuse-linker-plugin -fno-web -fno-gcse -fno-unit-at-a-time -fomit-frame-pointer  -c src/bg_color.c -S -o src/bg_color.s.txt
clean:
	make -f /opt/gendev-0.4.0/sgdk/mkfiles/makefile.gen clean
	rm -rf res/*.h out
gif:
	rm -rf rom2.gif mov/*
	ffmpeg -i rom*.mkv -r 30 mov/%04d.png
	convert -layers optimize -delay 3 mov/*.png rom2.gif
mp4:
	#ffmpeg -i rom*.mkv -b 1500k -r 15 -vf "scale=1280:720" -an -vcodec libx264 -pix_fmt yuv420p rom.mp4
	ffmpeg -i rom*.mkv -b 1500k -r 30  -vf "scale=1280:720" -vcodec libx264 -pix_fmt yuv420p rom.mp4
