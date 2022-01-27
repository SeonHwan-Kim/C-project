#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	char secret, rsp;
	printf("가위 바위 보 게임을 시작합니다.(게임종료 : 9)\n");
	srand(time(NULL));
	while(1)
	{
		printf("가위 바위 보를 선택하세요 : ");
		scanf("%c",&rsp);
		if(rsp != 'r'&&rsp != 's'&& rsp != 'p'&&rsp != '9')
		{
			printf("r, s, p, 9 중에 입력하세요\n");
			getchar();
			continue;
		}
		while(1)
		{
			secret = rand() % 4 + 112;
			if(secret == 'q')
				continue;
			else
				break;
		}
		if(rsp == '9')
		{
			printf("다음에 또 만나요.\n");
			break;
		}
		else if(rsp == 'r')
		{
			if (secret == 'p')
				printf("당신은 바위를 냈고 컴퓨터는 보를 냈습니다.\n당신은 졌습니다.\n");
			else if (secret == 's')
				printf("당신은 바위를 냈고 컴퓨터는 가위를 냈습니다.\n당신은 이겼습니다.\n");
			else
				printf("당신은 바위를 냈고 컴퓨터는 바위를 냈습니다.\n당신은 비겼습니다.\n");
			getchar();
			continue;
		}
		else if(rsp == 's')
		{
			if(secret == 'p')
				printf("당신은 가위를 냈고 컴퓨터는 보를 냈습니다.\n당신은 이겼습니다.\n");
			else if(secret == 's')
				printf("당신은 가위를 냈고 컴퓨터는 가위를 냈습니다.\n당신은 비겼습니다.\n");
			else
				printf("당신은 가위를 냈고 컴퓨터는 바위를 냈습니다.\n당신은 졌습니다.\n");
			getchar();
			continue;
		}
		else(rsp == 'p');
		{
			if(secret == 'p')
				printf("당신은 보를 냈고 컴퓨터는 보를 냈습니다.\n당신은 비겼습니다.\n");
			else if(secret == 's')
				printf("당신은 보를 냈고 컴퓨터는 가위를 냈습니다.\n당신은 졌습니다.\n");
			else
				printf("당신은 보를 냈고 컴퓨터는 바위를 냈습니다.\n당신은 이겼습니다.\n");
			getchar();
			continue;
		}
	}
	return 0;
}
