all:
	make -f /opt/gendev-0.4.0/sgdk/mkfiles/makefile.gen 
	picodrive out/rom.bin
clean:
	make -f /opt/gendev-0.4.0/sgdk/mkfiles/makefile.gen clean
	rm -rf res/*.h out
mp4:
	rm -rf rom.gif
	ffmpeg -i rom*.mkv -r 30 rom.gif
	rm -rf rom*.mkv
