#include <stdio.h>
 int main (void)
{
	int x,y,z;							
	for (x = 0;x <= 20;x++)				
	{
		for (y = 0;y <= 33;y++)			
		{
			for (z = 0;z <= 99;z++)		
			{
				if(15*x + 9*y + z == 300 && x + y + z == 100)
					printf("¹«¼¦£º%d,Ä¸¼¦£º%d,Ð¡¼¦£º%d\n",x,y,z);
			}
		}
	}
    return 0;
}
