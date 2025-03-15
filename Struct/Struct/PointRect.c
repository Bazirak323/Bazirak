#include <Stdio.h>



//포인트 구조체 정의

struct Point
{
	int x;
	int y;



};


//사각형 구조체 정의
struct Rectangle
{
	struct Point p1;
	struct Point p2;



};
int mainsdsdsdsdsdsd()
{

	struct Rectangle rect;
	rect.p1.x = 1;
	rect.p1.y = 4;


	rect.p2.x = 4;
	rect.p2.y = 1;

	printf("1. (%d, %d) / 2.(%d, %d)\n", rect.p1.x, rect.p1.y, rect.p2.x, rect.p2.y);











	return 0;
}