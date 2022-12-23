#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

class complex
{
    private:
        float real,img;
    public:
        float mag()
        {
            float temp;
            temp=sqrt((real,2)+(img,2));
            return temp; 
        }
        void setcmplx(float a,float b)
        {
            real=a;
            img=b;
        }
        void showcmplx()
        {
            cout<<real<<"\t+\tj"<<img<<endl;
        }
        void add(complex a,complex b)
        {
            real=a.real+b.real;
            img=a.img+b.img;
        }
        void substract(complex a,complex b)
        {
            real=a.real-b.real;
            img=a.img-b.img;
        }
        void multiply(complex a,complex b)
        {
            real=a.real*b.real-a.img*b.img;
            img=a.real*b.img+a.img*b.real;
        }
        void divide(complex a,complex b)
        {
            float magnitude;
            magnitude=b.mag();
            real=(a.real*b.real+a.img*b.img)/pow(magnitude,2);
            img=(-a.real*b.img+a.img*b.real)/pow(magnitude,2);
        }
        complex conjugate()
        {
            complex c;
            c.real=real;
            c.img=-(1)*img;
            return (c);
        }
};
class matrices
{
    private:
        double matr3[3][3];
    public:
        void setmat()
        {
            int i,j;
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                    cin>>matr3[i][j];
            }
        }
        double sumelm(matrices m)
        {
            int i,j;
            double sum=0.0;
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                    sum+=matr3[i][j];
            }
            return sum;
        }
         
};

int fact();

int prime();

int odev(int l);

int trignometry();


int main()
{
    int a,c,i,j,f,g,x;
    float b,e,val;
    char d;
    printf("CHOOSE THE DESIRED TASK:-\n");
    printf("1.SIMPLE ARITHMATIC OPERATION\n2.TRIGNOMETRIC CALCULATION\n3.SPECIAL CASES\n4.COMPLEX MATHEMATICS\nCHOICE:-");
    scanf("%d",&a);
    switch (a)
    {
        case 2:
            trignometry();
            break;  
        case 1:
            printf("A.SUM\nB.SUBSTRACTION\nC.MULTIPLICATION\nD.DIVITION\nE.MODULUS\n");
            printf("ENTER YOUR CHOICE:-\n");
            fflush(stdin);
            scanf("%c",&d);
            switch(d)
            {
                case 'A':
                    val=0;
                    printf("HOW MANY NUBERS YOU WANT TO ADD?\n");
                    scanf("%d",&j);
                    printf("ENTER THE NUMBERS\n");
                    for(i=1;i<=j;i++)
                    {
                        scanf("%f",&b);
                        val+=b;
                    }
                    printf("SUM:-\n%f",val);
                    break;
                case 'B':
                    val=0;
                    printf("HOW MANY NUBERS YOU WANT TO SUBSTRACT?\n");
                    scanf("%d",&j);
                    printf("PLEASE CAREFULLY ENTER NUMBER ACCORDING TO THEIR ORDER OF CALCULATION\n");
                    printf("ENTER THE NUMBERS\n");
                    for(i=1;i<=j;i++)
                    {
                        scanf("%f",&b);
                        if (i==1)
                            val+=b;
                        else
                            val-=b;
                    }
                    printf("DIFFERENCE:-\n%f",val);
                    break;
                case 'C':
                    val=1;
                    printf("HOW MANY NUBERS YOU WANT TO MULTIPLY?\n");
                    scanf("%d",&j);
                    printf("ENTER THE NUMBERS\n");
                    for(i=1;i<=j;i++)
                    {
                        scanf("%f",&b);
                        val=val*b;
                    }
                    printf("PRODUCT:-\n%f",val);
                    break;
                case 'D':
                    printf("PLEASE CAREFULLY ENTER NUMBER ACCORDING TO THEIR ORDER OF CALCULATION\n");
                    printf("ENTER THE VALUE OF A AND B IN EXPRESSION A/B\n");
                    scanf("%f%f",&e,&f);
                    printf("DIVISION:-\n%f",e/f);
                    break;
                case 'E':
                    printf("PLEASE CAREFULLY ENTER NUMBER ACCORDING TO THEIR ORDER OF CALCULATION\n");
                    printf("ENTER THE VALUE OF A AND B IN EXPRESSION A%B\n");
                    scanf("%d%d",&f,&g);
                    printf("REMAINDER:-\n%d",f%g);
                    break;
            break;
            }
        case 3:
            printf("CHOOSE FROM THE OPTIONS GIVEN BELOW:-\n");
            printf("A.FACTORIAL\nB.PRIME\nC.ODD OR EVEN\nD.EXIT\n");
            fflush(stdin);
            scanf("%c",&d);
            switch(d)
            {
                case 'A':
                    fact();
                    break;
                case 'B':
                    prime();
                    break;
                case 'C':
                    printf("ENTER THE NUMBER:-\n");
                    scanf("%d",&x);
                    odev(x);
                    break;
                case 'D':
                    exit(3);
            }
        case 4:
            complex num1, num2,res;
            float a,b;
            char chc;
            cout<<"ENTER THE REAL AND IMAGINARY PART OF FIRST CONMPLEX NUMBER"<<endl;
            cin>>a>>b;
            num1.setcmplx(a,b);
            cout<<"ENTER THE REAL AND IMAGINARY PART OF SECOND CONMPLEX NUMBER"<<endl;
            cin>>a>>b;
            num2.setcmplx(a,b);
            cout<<"THE FIRST COMPLEX NUMBER IS:-";num1.showcmplx();
            cout<<"THE SECOND COMPLEX NUMBER IS:-";num2.showcmplx();
            cout<<"PLEASE CHOOSE FROM THE OPTIONS GIVEN BELOW:-\n1.ADDITION\n2.SUBSTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.CONJUGATE\nCHOICE:-";
            cin>>chc;
            switch(chc)
                case '1':
                    res.add(num1,num2);
                    res.showcmplx();
                    break;
                case '2':
                    res.substract(num1,num2);
                    res.showcmplx();
                    break;
                case '3':
                    res.multiply(num1,num2);
                    res.showcmplx();
                    break;
                case '4':
                    res.divide(num1,num2);
                    res.showcmplx();
                    break;
                case '5':
                    res=num1.conjugate();
                    res.showcmplx();
    }
    return 0;
}
int trignometry()
{
    int x;
    float a1,a2,b,c,d,e,f,g;
    printf("!PLEASE CHOOSE IN WHICH UNIT YOU WANT TO ENTER VALUE OF ANGLE!\n1.DEGREE\n2.RADIAN\n");
    printf("!PRESS '1' OR '2'!---");
    scanf("%d",&x);
    if (x==1)
    {
        printf("ENTER THE ANGLE A IN DEGREE:-");
        scanf("%f",&a2);
        a1=(a2*3.1415926536)/180;
    }        

    if (x==2)
    {
        printf("ENTER THE ANGLE A IN RADIAN:-");
        scanf("%f",&a1);
        
    }
    b=sinf(a1);
    c=cosf(a1);
    d=tanf(a1);
    e=1/b;
    f=1/c;
    g=1/d;       
    printf("!THE VARIOUS TRIGNOMETRIC RATIOS ARE:-\n\n\n");
    printf("sinA=%f\ncosA=%f\ntanA=%f\ncosecA=%f\nsecA=%f\ncotA=%f\n",b,c,d,e,f,g);
    return 0;
}
int fact()
{
    int a,i,f;
    char b;
    do
    {
        f=1;
        printf("ENTER THE NUMBER:-");
        scanf("%d",&a);
        printf("THE FACTORIAL OF %d IS \n",a);
        for (i=1;i<=a;i+=1)
        {
            f=f*i;
        }
        printf("%d",f);
        fflush(stdin);
        printf("\n");
        printf("DO YO WANT MORE?y/n \n");
        scanf("%c",&b);
    } while (b=='y');
    return 0;
}
int prime()
{
    int i,a;
    printf("ENTER THE NUMBER TO CHECK FOR PRIME:-");
    scanf("%d",&a);
    for (i=2;i<=a;i+=1)
    {
        if (i==a)
        {
            printf("%d IS A PRIME",a);
            exit(9);
        }
        else if (a%i==0)
            break;    
    }
    printf("%d IS NOT A PRIME",a);
    return 0;
}
int odev(int l)
{
    if (l%2==0)
        printf("THE NUMBER IS EVEN");
    else
        printf("THE NUMBER IS ODD");
    return 0;
};