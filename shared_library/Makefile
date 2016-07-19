
all: lib main

lib:
	gcc -fPIC -c eye.c
	gcc -fPIC -c head.c
	gcc -fPIC -c mouse.c
	gcc -shared -o libshow.so eye.o head.o mouse.o

main:
	gcc main.c -L. -lshow
	#gcc -c -o main.o main.c
	#gcc -o a.out main.o -L. -lshow
	#執行前需要手動將libshow.so放到系統的lib路徑
	#sudo cp libshow.so /usr/lib
	

clean:
	rm *.o libshow.so a.out
