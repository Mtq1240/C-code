//1.
//声明一个指向含有10个元素的数组的指针，
//其中每个元素是一个函数指针，该函数的返回值是int，参数是int* ，正确的是（  C ）
A.    (int* p[10])(int*)

B.    int[10] * p(int*)

C.    int (*(*p)[10])(int*)

D.    int((int*)[10])* p


//2.
//定义一个函数指针，指向的函数有两个int形参并且返回一个函数指针，返回的指针指向一个有一个int形参且返回int的函数？下面哪个是正确的？（ A  ）
A.    int (*(*F)(int, int))(int)

B.    int (*F)(int, int)

C.    int (*(*F)(int, int))

D.    *(*F)(int, int)(int)

//3.
