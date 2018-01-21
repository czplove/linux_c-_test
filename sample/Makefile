sample : sample.o #-helloword 就是我们要生成的目标,sample.o是生成此目标的先决条件
	g++ -o sample sample.o
sample.o : sample.cpp
	g++ -c sample.cpp

clean :
	rm sample sample.o


#g++ sample.cpp -o sample
