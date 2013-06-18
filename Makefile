mdetect : mdetect.o
				g++ -o mdetect mdetect.o -lopencv_core -lopencv_highgui -lopencv_imgproc 

mdetect.o : mdetect.cc
				g++ -c mdetect.cc
