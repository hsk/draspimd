all: #res/char.h
	make -f /opt/gendev-0.4.0/sgdk/mkfiles/makefile.gen 
	picodrive out/rom.bin
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
