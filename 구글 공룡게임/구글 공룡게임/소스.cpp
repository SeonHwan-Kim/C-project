#include <stdio.h> //c����� ǥ�ض��̺귯�� �� ���� �Լ����� �ҷ���.
#include <windows.h> //window���� ���� �Լ����� �̿��� �� �ְ���.
#include <conio.h> //Ű�� �Է¹��� �� �ְ���. getcha ... etc
#include <stdbool.h> //bool (true, false)
#include <time.h> // �ð�
#define DINO_BOTTOM_Y 37 //������ ù��° ���� ����Ǵ� ��
#define TREE_BOTTOM_Y 37 //�������� ... �� ������ y��
#define TREE_BOTTOM_X 80 //�������� �̵��ϴ� x��

void SetConsoleView() //�ܼ� â�� ũ�⸦ ��Ÿ���� �Լ�
{
    system("mode con:cols=200 lines=50");
    system("title dinosaurs game by team 4");
}

void GotoXY(int x, int y) //Ŀ���� ��ġ�� �̵���Ű�� �Լ�
{
    COORD Pos;
    Pos.X = 2 * x;
    Pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void Tree1(int treeX1) {

    GotoXY(treeX1, TREE_BOTTOM_Y);
    printf("      ����");
    GotoXY(treeX1, TREE_BOTTOM_Y + 1);
    printf("      ����");
    GotoXY(treeX1, TREE_BOTTOM_Y + 2);
    printf("      ����");
    GotoXY(treeX1, TREE_BOTTOM_Y + 3);
    printf("      ����  ���");
    GotoXY(treeX1, TREE_BOTTOM_Y + 4);
    printf("���  ����  ���");
    GotoXY(treeX1, TREE_BOTTOM_Y + 5);
    printf("���  ����  ���");
    GotoXY(treeX1, TREE_BOTTOM_Y + 6);
    printf("���  ����  ���");
    GotoXY(treeX1, TREE_BOTTOM_Y + 7);
    printf("���  �������");
    GotoXY(treeX1, TREE_BOTTOM_Y + 8);
    printf("����������");
    GotoXY(treeX1, TREE_BOTTOM_Y + 9);
    printf("�������");
    GotoXY(treeX1, TREE_BOTTOM_Y + 10);
    printf("      ����");
    GotoXY(treeX1, TREE_BOTTOM_Y + 11);
    printf("      ����");
    GotoXY(treeX1, TREE_BOTTOM_Y + 12);
    printf("      ����");
}
void Tree2(int treeX2) {
    GotoXY(treeX2, TREE_BOTTOM_Y + 3);
    printf("      ����         ����");
    GotoXY(treeX2, TREE_BOTTOM_Y + 4);
    printf("      ����  ��     ����");
    GotoXY(treeX2, TREE_BOTTOM_Y + 5);
    printf("      ����  �� ��  ����");
    GotoXY(treeX2, TREE_BOTTOM_Y + 6);
    printf("���  ����  �� ��  ����  ���");
    GotoXY(treeX2, TREE_BOTTOM_Y + 7);
    printf("���  ����  �� ��  ����  ���");
    GotoXY(treeX2, TREE_BOTTOM_Y + 8);
    printf("���  ������ ������  ���");
    GotoXY(treeX2, TREE_BOTTOM_Y + 9);
    printf("��������� ���������");
    GotoXY(treeX2, TREE_BOTTOM_Y + 10);
    printf("�������         �������");
    GotoXY(treeX2, TREE_BOTTOM_Y + 11);
    printf("      ����         ����");
    GotoXY(treeX2, TREE_BOTTOM_Y + 12);
    printf("      ����         ����");

}
void Tree3(int treeX3) {
    GotoXY(treeX3, TREE_BOTTOM_Y + 3);
    printf("      ���� ");
    GotoXY(treeX3, TREE_BOTTOM_Y + 4);
    printf("      ����  �� ");
    GotoXY(treeX3, TREE_BOTTOM_Y + 5);
    printf("      ����  �� ");
    GotoXY(treeX3, TREE_BOTTOM_Y + 6);
    printf("���  ����  �� ");
    GotoXY(treeX3, TREE_BOTTOM_Y + 7);
    printf("���  ����  �� ");
    GotoXY(treeX3, TREE_BOTTOM_Y + 8);
    printf("���  ������ ");
    GotoXY(treeX3, TREE_BOTTOM_Y + 9);
    printf("��������� ");
    GotoXY(treeX3, TREE_BOTTOM_Y + 10);
    printf("  ������     ");
    GotoXY(treeX3, TREE_BOTTOM_Y + 11);
    printf("      ����     ");
    GotoXY(treeX3, TREE_BOTTOM_Y + 12);
    printf("      ����     ");
}
//������ ��� 3��, ���� ū��-->1, �ΰ�¥�� --> 2, ���������� -->3

int GetKeyDown()
{
    if (_kbhit() != 0)
    {
        return _getch();
    }
    return 0;
}

void DrawDino(int dinoY)
{
    GotoXY(0, dinoY);
    static bool legFlag = true;
    printf("        ��������� \n");
    printf("       ���  �������\n");
    printf("       ����������\n");
    printf("��      ����      \n");
    printf("���     ��������  \n");
    printf("����   �����     \n");
    printf(" ������������ \n");
    printf(" ���������    ��\n");
    printf("  �������    \n");
    printf("    �����    \n");
    printf("     ����     \n");
    if (legFlag)
    {
        printf("     ��   ���   \n");
        printf("     ���         ");
        legFlag = false;
    }
    else
    {
        printf("     ���   ��    \n");
        printf("            ���  ");
        legFlag = true;
    }
}

void start() {
    int x = 37;
    GotoXY(x, 12); printf("******************************\n");
    GotoXY(x, 13); printf("*                            *\n");
    GotoXY(x, 14); printf("*     -------------------    *\n");
    GotoXY(x, 15); printf("*    ��  Dinosaur Game  ��   *\n");
    GotoXY(x, 16); printf("*     -------------------    *\n");
    GotoXY(x, 17); printf("*                            *\n");
    GotoXY(x, 18); printf("******************************\n");
    GotoXY(x - 5, 21); printf("�ڡڡ�  press 'space bar' to start the game  �ڡڡ�");
    GotoXY(x, 23); printf("'z' = jump . . . score: +100");
    GotoXY(x, 24); printf("'x' = jump higher . . . score: +20");
}

bool isCollision1(const int treeX1, const int dinoY)
{
    GotoXY(0, 0);
    printf("treeX : %d, dinoY : %d", treeX1, dinoY);
    if (treeX1 <= 10 && treeX1 >= 0 &&
        dinoY >= 27)
    {
        return true;
    }
    return false;
}
bool isCollision2(const int treeX2, const int dinoY) //�ΰ�¥��
{
    GotoXY(0, 0);
    printf("treeX : %d, dinoY : %d", treeX2, dinoY);
    if (treeX2 <= 10 && treeX2 >= 0 &&
        dinoY >= 30)
    {
        return true;
    }
    return false;
}
bool isCollision3(const int treeX3, const int dinoY) //���� ������ 
{
    GotoXY(0, 0);
    printf("treeX : %d, dinoY : %d", treeX3, dinoY);
    if (treeX3 <= 10 && treeX3 >= 0 &&
        dinoY >= 33)
    {
        return true;
    }
    return false;
}

void Gameover(int score, int random) {
    int x = 30;
    GotoXY(x, 15);
    printf("�ǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢ�");
    GotoXY(x, 16);
    printf("��                                                    ��");
    GotoXY(x, 17);
    printf("��                                                    ��");
    GotoXY(x, 18);
    printf("��        +---------------------------------+         ��");
    GotoXY(x, 19);
    printf("��        |       G A M E  O V E R !        |         ��");
    GotoXY(x, 20);
    printf("��        +---------------------------------+         ��");
    GotoXY(x, 21);
    printf("��                                                    ��");
    GotoXY(x, 22);
    printf("��        YOUR SCORE : %10.d !                   ��", score);
    GotoXY(x, 23);
    printf("��    �ڡڡ�   PRESS ANY KEY TO RESTART    �ڡڡ�     ��");
    GotoXY(x, 24);
    printf("��                                                    ��");
    GotoXY(x, 25);
    printf("�ǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢǢ�");
    GotoXY(x, 28);
    printf("PRESS \"1\" TO RESTART");
    GotoXY(x, 29);
    printf("PRESS \"2\" TO EXIT");
    GotoXY(x, 30);
    if (random == 4) {
        printf("���� �����忡 �ε��� ����Ͽ����ϴ� . . .");
    }
    if (random == 5) {
        printf("���� �����忡 �ε��� ����Ͽ����ϴ� . . .");
    }
    if (random == 6) {
        printf("���� �����忡 �ε��� ����Ͽ����ϴ� . . .");
    }
}
//gameoverȭ��â
void ExRe(int score, int random) {
    int a;
    Gameover(score, random);
    scanf_s("%d", &a);
    DrawDino(DINO_BOTTOM_Y);
    if (a == 1) {
        
    }
    if (a == 2) {
        exit(0);
    }
}
//����� Ȥ�� ����
void playGameover(int score, int random) {
    while (1) {
        while (1) {
            DrawDino(DINO_BOTTOM_Y); //����׷���
            Gameover(score, random); //Gameoverȭ���� �׷���
            system("cls"); //ȭ�� �ʱ�ȭ
            if (_kbhit()) break; //Ű���尡 ������ break
        }
        ExRe(score, random); //break �� ���� ��
    }
}
//���ӿ����� �Ѱ��ϴ� �Լ�
void Random(int random, int treeX) {
    if (random == 1) {
        Tree1(treeX);
    }
    if (random == 2) {
        Tree2(treeX);
    }
    if (random == 3) {
        Tree3(treeX);
    }
}

int main() {
    SetConsoleView();
    int dinoJump = 37;
    char kb;
    int random = (rand() % 3) + 1;
    while (1) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        start();
        system("cls");
        if (GetKeyDown() == 32)
            break;
    }

    while (true)
    {
        bool isJumping = false;
        bool isBottom = true;
        const int gravity = 3.5;      //gravity ������ 3���� ����

        int dinoY = DINO_BOTTOM_Y;
        int treeX = TREE_BOTTOM_X;

        int score = 0;
        clock_t start, curr;
        start = clock();

        while (true)
        {
            if (isCollision1(treeX, dinoY) && (random == 1)) {
                random = 4;
                break;
            }
            else if (isCollision2(treeX, dinoY) && (random == 2)) {
                random = 5;
                break;
            }
            else if (isCollision3(treeX, dinoY) && (random == 3)) {
                random = 6;
                break;
            }
            kb = GetKeyDown();
            if (kb && isBottom)
            {
                int color = rand() % 5 + 10;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
                if (kb == 'z') {
                    dinoJump = 23;
                    score += 100;
                }
                if (kb == 'x') {
                    dinoJump = 15;
                    score += 20;
                }
                isJumping = true;
                isBottom = false;
            }

            if (isJumping)
            {
                dinoY -= gravity;      //z�� ������ �ٴڿ� ���� ��� dinoY�� 3�� ���ҽ�Ŵ -> ���� �ö�
            }
            else
            {
                dinoY += gravity;      //�ƴϸ� dinoY�� 3�� ������Ŵ -> ���� ������
            }
            if (dinoY >= DINO_BOTTOM_Y)
            {
                dinoY = DINO_BOTTOM_Y;
                isBottom = true;
            }
            treeX -= 2;
            if (treeX <= 0)
            {
                treeX = TREE_BOTTOM_X;
                random = (rand() % 3) + 1;
            }
            if (dinoY <= dinoJump)      //������ 3���� �ö� �� ����. �� ���� ���� ��Ű���� ���� ���̱�
            {
                isJumping = false;
            }
            DrawDino(dinoY);
            Random(random, treeX);

            curr = clock();
            if (((curr - start) / CLOCKS_PER_SEC) >= 1)
            {
                score++;
                start = clock();
            }
            Sleep(60);
            system("cls");

            GotoXY(22, 0);
            printf("Score : %d", score);
        }
        playGameover(score, random);
    }
    return 0;
}