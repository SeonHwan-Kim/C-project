#include <stdio.h> //c언어의 표준라이브러리 속 여러 함수들을 불러옴.
#include <windows.h> //window내의 여러 함수들을 이용할 수 있게함.
#include <conio.h> //키를 입력받을 수 있게함. getcha ... etc
#include <stdbool.h> //bool (true, false)
#include <time.h> // 시간
#define DINO_BOTTOM_Y 37 //공룡의 첫번째 줄이 실행되는 줄
#define TREE_BOTTOM_Y 37 //선인장의 ... 줄 고정된 y축
#define TREE_BOTTOM_X 80 //선인장이 이동하는 x축

void SetConsoleView() //콘솔 창의 크기를 나타내는 함수
{
    system("mode con:cols=200 lines=50");
    system("title dinosaurs game by team 4");
}

void GotoXY(int x, int y) //커서의 위치를 이동시키는 함수
{
    COORD Pos;
    Pos.X = 2 * x;
    Pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void Tree1(int treeX1) {

    GotoXY(treeX1, TREE_BOTTOM_Y);
    printf("      ■■■");
    GotoXY(treeX1, TREE_BOTTOM_Y + 1);
    printf("      ■■■");
    GotoXY(treeX1, TREE_BOTTOM_Y + 2);
    printf("      ■■■");
    GotoXY(treeX1, TREE_BOTTOM_Y + 3);
    printf("      ■■■  ■■");
    GotoXY(treeX1, TREE_BOTTOM_Y + 4);
    printf("■■  ■■■  ■■");
    GotoXY(treeX1, TREE_BOTTOM_Y + 5);
    printf("■■  ■■■  ■■");
    GotoXY(treeX1, TREE_BOTTOM_Y + 6);
    printf("■■  ■■■  ■■");
    GotoXY(treeX1, TREE_BOTTOM_Y + 7);
    printf("■■  ■■■■■■");
    GotoXY(treeX1, TREE_BOTTOM_Y + 8);
    printf("■■■■■■■■■");
    GotoXY(treeX1, TREE_BOTTOM_Y + 9);
    printf("■■■■■■");
    GotoXY(treeX1, TREE_BOTTOM_Y + 10);
    printf("      ■■■");
    GotoXY(treeX1, TREE_BOTTOM_Y + 11);
    printf("      ■■■");
    GotoXY(treeX1, TREE_BOTTOM_Y + 12);
    printf("      ■■■");
}
void Tree2(int treeX2) {
    GotoXY(treeX2, TREE_BOTTOM_Y + 3);
    printf("      ■■■         ■■■");
    GotoXY(treeX2, TREE_BOTTOM_Y + 4);
    printf("      ■■■  ■     ■■■");
    GotoXY(treeX2, TREE_BOTTOM_Y + 5);
    printf("      ■■■  ■ ■  ■■■");
    GotoXY(treeX2, TREE_BOTTOM_Y + 6);
    printf("■■  ■■■  ■ ■  ■■■  ■■");
    GotoXY(treeX2, TREE_BOTTOM_Y + 7);
    printf("■■  ■■■  ■ ■  ■■■  ■■");
    GotoXY(treeX2, TREE_BOTTOM_Y + 8);
    printf("■■  ■■■■■ ■■■■■  ■■");
    GotoXY(treeX2, TREE_BOTTOM_Y + 9);
    printf("■■■■■■■■ ■■■■■■■■");
    GotoXY(treeX2, TREE_BOTTOM_Y + 10);
    printf("■■■■■■         ■■■■■■");
    GotoXY(treeX2, TREE_BOTTOM_Y + 11);
    printf("      ■■■         ■■■");
    GotoXY(treeX2, TREE_BOTTOM_Y + 12);
    printf("      ■■■         ■■■");

}
void Tree3(int treeX3) {
    GotoXY(treeX3, TREE_BOTTOM_Y + 3);
    printf("      ■■■ ");
    GotoXY(treeX3, TREE_BOTTOM_Y + 4);
    printf("      ■■■  ■ ");
    GotoXY(treeX3, TREE_BOTTOM_Y + 5);
    printf("      ■■■  ■ ");
    GotoXY(treeX3, TREE_BOTTOM_Y + 6);
    printf("■■  ■■■  ■ ");
    GotoXY(treeX3, TREE_BOTTOM_Y + 7);
    printf("■■  ■■■  ■ ");
    GotoXY(treeX3, TREE_BOTTOM_Y + 8);
    printf("■■  ■■■■■ ");
    GotoXY(treeX3, TREE_BOTTOM_Y + 9);
    printf("■■■■■■■■ ");
    GotoXY(treeX3, TREE_BOTTOM_Y + 10);
    printf("  ■■■■■     ");
    GotoXY(treeX3, TREE_BOTTOM_Y + 11);
    printf("      ■■■     ");
    GotoXY(treeX3, TREE_BOTTOM_Y + 12);
    printf("      ■■■     ");
}
//선인장 모양 3개, 제일 큰거-->1, 두개짜리 --> 2, 제일작은거 -->3

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
    printf("        ■■■■■■■■ \n");
    printf("       ■■  ■■■■■■\n");
    printf("       ■■■■■■■■■\n");
    printf("■      ■■■      \n");
    printf("■■     ■■■■■■■  \n");
    printf("■■■   ■■■■     \n");
    printf(" ■■■■■■■■■■■ \n");
    printf(" ■■■■■■■■    ■\n");
    printf("  ■■■■■■    \n");
    printf("    ■■■■    \n");
    printf("     ■■■     \n");
    if (legFlag)
    {
        printf("     ■   ■■   \n");
        printf("     ■■         ");
        legFlag = false;
    }
    else
    {
        printf("     ■■   ■    \n");
        printf("            ■■  ");
        legFlag = true;
    }
}

void start() {
    int x = 37;
    GotoXY(x, 12); printf("******************************\n");
    GotoXY(x, 13); printf("*                            *\n");
    GotoXY(x, 14); printf("*     -------------------    *\n");
    GotoXY(x, 15); printf("*    ㅣ  Dinosaur Game  ㅣ   *\n");
    GotoXY(x, 16); printf("*     -------------------    *\n");
    GotoXY(x, 17); printf("*                            *\n");
    GotoXY(x, 18); printf("******************************\n");
    GotoXY(x - 5, 21); printf("★★★  press 'space bar' to start the game  ★★★");
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
bool isCollision2(const int treeX2, const int dinoY) //두개짜리
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
bool isCollision3(const int treeX3, const int dinoY) //작은 선인장 
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
    printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤");
    GotoXY(x, 16);
    printf("▤                                                    ▤");
    GotoXY(x, 17);
    printf("▤                                                    ▤");
    GotoXY(x, 18);
    printf("▤        +---------------------------------+         ▤");
    GotoXY(x, 19);
    printf("▤        |       G A M E  O V E R !        |         ▤");
    GotoXY(x, 20);
    printf("▤        +---------------------------------+         ▤");
    GotoXY(x, 21);
    printf("▤                                                    ▤");
    GotoXY(x, 22);
    printf("▤        YOUR SCORE : %10.d !                   ▤", score);
    GotoXY(x, 23);
    printf("▤    ★★★   PRESS ANY KEY TO RESTART    ★★★     ▤");
    GotoXY(x, 24);
    printf("▤                                                    ▤");
    GotoXY(x, 25);
    printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤");
    GotoXY(x, 28);
    printf("PRESS \"1\" TO RESTART");
    GotoXY(x, 29);
    printf("PRESS \"2\" TO EXIT");
    GotoXY(x, 30);
    if (random == 4) {
        printf("높은 선인장에 부딪혀 사망하였습니다 . . .");
    }
    if (random == 5) {
        printf("연속 선인장에 부딪혀 사망하였습니다 . . .");
    }
    if (random == 6) {
        printf("낮은 선인장에 부딪혀 사망하였습니다 . . .");
    }
}
//gameover화면창
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
//재시작 혹은 종료
void playGameover(int score, int random) {
    while (1) {
        while (1) {
            DrawDino(DINO_BOTTOM_Y); //공룡그려짐
            Gameover(score, random); //Gameover화면이 그려짐
            system("cls"); //화면 초기화
            if (_kbhit()) break; //키보드가 눌리면 break
        }
        ExRe(score, random); //break 시 오는 곳
    }
}
//게임오버를 총괄하는 함수
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
        const int gravity = 3.5;      //gravity 변수를 3으로 설정

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
                dinoY -= gravity;      //z를 누르고 바닥에 있을 경우 dinoY를 3씩 감소시킴 -> 공룡 올라감
            }
            else
            {
                dinoY += gravity;      //아니면 dinoY를 3씩 증가시킴 -> 공룡 내려감
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
            if (dinoY <= dinoJump)      //공룡이 3까지 올라갈 수 있음. 더 높이 점프 시키려면 숫자 줄이기
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