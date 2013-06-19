all : mdetect mdetect2

mdetect : mdetect.o
				g++ -o mdetect mdetect.o -lopencv_core -lopencv_highgui -lopencv_imgproc 

mdetect.o : mdetect.cc
				g++ -c mdetect.cc

mdetect2 : mdetect2.o
				g++ -o mdetect2 mdetect2.o -lopencv_core -lopencv_highgui -lopencv_imgproc 

mdetect2.o : mdetect2.cc
				g++ -c mdetect2.cc


