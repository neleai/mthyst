all:
	erb ruby_wrapper.rc > ruby_wrapper.c
	astyle ruby_wrapper.c
	erb stackmachine.rc > stackmachine.c
	astyle stackmachine.c
	erb stackmachine.rh > stackmachine.h
	astyle stackmachine.h
	erb representation.rc > representation.c
	astyle representation.c
	gcc -I. -I/usr/include/ruby-1.9.1/x86_64-linux -I/usr/include/ruby-1.9.1/ruby/backward -I/usr/include/ruby-1.9.1 -I. -fPIC -fno-strict-aliasing -g -g -fPIC -c representation.c -o representation.o
	gcc stackmachine.c -fPIC -c -g -o stackmachine.o
	gcc -I. -I/usr/include/ruby-1.9.1/x86_64-linux -I/usr/include/ruby-1.9.1/ruby/backward -I/usr/include/ruby-1.9.1 -I. -fPIC -fno-strict-aliasing -g -g -fPIC -c ruby_wrapper.c -o ruby_wrapper.o
	gcc -shared -o RegReg.so representation.o stackmachine.o ruby_wrapper.o -L. -L/usr/lib -L. -rdynamic -Wl,-export-dynamic -lruby-1.9.1 -lpthread -lrt -ldl -lcrypt -lm -lc
