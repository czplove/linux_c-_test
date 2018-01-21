sample : main.o class_dec.o class_fun.o#-helloword 就是我们要生成的目标,sample.o是生成此目标的先决条件
	g++ -o sample main.o
main.o : main.cpp
	g++ -c main.cpp

clean :
	rm sample sample.o


#g++ sample.cpp -o sample
