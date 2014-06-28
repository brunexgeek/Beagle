default:
	gcc beagle-loader.c -o beagle-loader -ldl
	gcc output.c --shared -o output.so
