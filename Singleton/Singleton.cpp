// Singleton.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Sun.h"

int main()
{
	Sun theSun = Sun::getInstance();

	theSun.shine();


	Sun::getInstance().shine();

    return 0;
}

