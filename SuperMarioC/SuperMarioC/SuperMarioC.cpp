#include "stdio.h"
#include "time.h"

void SuperMario()
{
	printf("                ********\n");
	printf("               ************\n");
	printf("               ####....#.\n");
	printf("             #..###.....##....\n");
	printf("             ###.......######              ###                 ###           ###           ###\n");
	printf("                ...........               #...#               #...#         #...#         #...#\n");
	printf("               ##*#######                 #.#.#               #.#.#         #.#.#         #.#.#\n");
	printf("            ####*******######             #.#.#               #.#.#         #.#.#         #.#.#\n");
	printf("           ...#***.****.*###....          #...#               #...#         #...#         #...#\n");
	printf("           ....**********##.....           ###                 ###           ###           ###\n");
	printf("           ....****    *****....\n");
	printf("             ####        ####\n");
	printf("           ######        ######\n");
	printf("##############################################################              ##################################\n");
	printf("#...#......#.##...#......#.##...#......#.##------------------#              #...#......#.##------------------#\n");
	printf("###########################################------------------#              ###############------------------#\n");
	printf("#..#....#....##..#....#....##..#....#....#####################              #..#....#....#####################\n");
	printf("##########################################    #----------#                  ##############    #----------#\n");
	printf("#.....#......##.....#......##.....#......#    #----------#                  #.....#......#    #----------#\n");
	printf("##########################################    #----------#                  ##############    #----------#\n");
	printf("#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#                  #.#..#....#..#    #----------#\n");
	printf("##########################################    ############                  ##############    ############\n");
}

void SuperMario1()
{
	char t[] = "pI k] k76(' a(,2;-6 a2EAf2u2W2W2 pYk(1(k(1(M(1(M(1( k-&Fu('('(k('('(M('('(M('('( \\7DAa('('(k('('(M('('(M('('( W1(0'5'&26R(1(k(1(M(1(M(1( W6S-;W2u2W2W2 W654:6 a7H7 WAHA }}}Kf}s (1(@('-1(@('-1(@('-~(f(1(@('-~( }}F~(fn~( (,(6(6-,(6(6-,(6(6}2f(,(6(6}2 }}A4(V(zi4(V( (;(@-;(@-;(@(4(V(z(;(@(4(V( }}A4(V(zi4(V( ('(,(6(,-'(,(6(,-'(,(6(,(4(V(z('(,(6(,(4(V( }}A4_zi4_";
	int x, y, c, i;
	for (i = 0;; i++) {
		if (!t[i])
			return;
		if (t[i] == 32)
		{
			printf("\n");
			goto m;
		}
		x = (t[i] - 32) % 5; y = (t[i] - 32) / 5;
		if (x == 0)
			c = 32;
		if (x == 1)
			c = 42;
		if (x == 2)
			c = 46;
		if (x == 3)
			c = 35;
		if (x == 4)
			c = 45;
		for (; y>0; y--)
			putchar(c);
	m:;
	}
}

int main()
{
	clock_t start, finish;
	double Total_time;
	start = clock();

	SuperMario();
	//SuperMario1();

	finish = clock();
	Total_time = (double)(finish - start);
	printf("\n函数运行时间：%0.3f毫秒 \n", Total_time);

	getchar();
	return 0;
}
