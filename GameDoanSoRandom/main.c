#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main(int argc, char *argv[])
{
    //GAME Doan So
    //Chuong trinh se tao ngau nhien gia tri roi cho nguoi dung doan den khi trung thi thoi
    printf("Game Doan So\n\n");

    const int MAX=100, MIN=1;//Gioi han trong khoang tu 1 den 100
    int soBiMat=0, soNguoiDung=0,demSoLanDoan=0;
    char kituChucNang;
    //Tao so ngau nhien
    while (soBiMat==0)
    {
        srand (time(NULL));
        soBiMat = (rand( ) % (MAX - MIN + 1)) + MIN;
    }
    //Lap den khi nguoi dung doan dung
    while  (!(soBiMat== soNguoiDung))
    {
        demSoLanDoan+=1;
        printf("Lan doan thu %d, So cua ban? : ",demSoLanDoan) ;
        scanf("%d",&soNguoiDung);

        if (!(1<soNguoiDung||soNguoiDung<101))
        {
            printf("Loi");
            break;
        }

        if (soBiMat ==soNguoiDung )
        {
           printf("Chuan Men! Dap an la %d\n",soBiMat);
        }
        else if (soBiMat>soNguoiDung )
        {
            printf("Sai, So do lon hon\n");
        }
        else if (soBiMat<soNguoiDung)
        {
            printf("Sai, So do Nho hon\n");
        }
    }
    return 0;


}
