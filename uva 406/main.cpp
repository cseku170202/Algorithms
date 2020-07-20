#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n,i,j,s,A[100]={0},k=0,p=0,print,coun=0,q=0,a=0,r,f=0,t=1,b=0,c=0,d=0;

    while(cin>>n>>print)
    {
        a=print;
        for(i=1;i<=n;i++)
        {
            for(j=2;j<i;j++)
            {
               s=i%j;
               if(s==0)
               break;
            }
            if(s!=0)
            {
               // if(n%i==0)
               // printf("%d ",i);
               A[k]=i;
               k++;
            }
        }
        for(p=0;p<k;p++)
        {
            coun++;
        }
        if(coun%2!=0)
        {
            print=(2*print)-1;
           // r=coun/print;
           while(t>=1 && t<=coun-2)
          {
            t=1;
            for(a=t+print;a<n;a++)
            {
                c++;
            }
            for(b=t-1;b>=0;b--)
            {
                d++;
            }
           if(c==d)
           {
             r=c;
             while(r>=0)
             {
                f++;
                if(f<=print)
                {
                   printf("%d ",A[r]);
                   r++;
                }
                if(f>print)
                {
                    printf("\n");
                    break;
                }
            }
          }
          t++;
        }
            printf("\n");
     }



        if(coun%2==0)
        {
            print=2*print;
            while(t>=1 && t<=coun-2)
           {

            t=1;
            for(a=t+print;a<coun-1;a++)
            {
                c++;
            }
            for(b=t-1;b>=0;b--)
            {
                d++;
            }
            if(c==d)
            {
                r=c;
           // r=coun/print;
                while(r>=0 && r<=2000)
                {
                   f++;
                   if(f<=print)
                   {
                      printf("%d ",A[r]);
                       r++;
                    }
                   if(f>print)
                   {
                      printf("\n");
                      break;
                    }
                 }
              }
              c=0;
              d=0;
              t++;
           }
        }
        for(i=0;i<k;i++)
        {
            A[i]=0;
        }
        coun=0;
        k=0;
        s=4310080;
        f=0;
    }
    return 0;
}
