@REM create build dir
mkdir .\build\
@REM  build 
g++ -c sample.cpp && g++ -shared -o .\build\sample.dll .\sample.o