#include<bits/stdc++.h>
using namespace std;
/*int main(){
	double a,b,c,r1,r2;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(b*b-4*a*c<0)
		printf("No real roots!");
	else{
		r1=(-b+sqrt(b*b-4*a*c))/(2*a);
		r2=(-b-sqrt(b*b-4*a*c))/(2*a);	
		printf("r1=%7.2f\nr2=%7.2f",r1,r2);
	}
	return 0;
}*/
/*int main(){
	double a,b;
	scanf("%lf%lf",&a,&b);
	if(a>b)
		printf("%.2f %.2f\n",b,a);
	else
		printf("%.2f %.2f\n",a,b);
	return 0;
}*/
/*double swap(double *t1,double *t2){
	double temp=*t1;
	*t1=*t2;
	*t2=temp;
}
int main(){
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a>b){
		if(b>c){
			swap(&b,&c);
			swap(&a,&b);
			swap(&b,&c);
		}
		else if(a<c){
			swap(&a,&b);
		}
		else{
			swap(&a,&c);
			swap(&a,&b);
		}	
	}
	else if(b>c){
		if(a>c){
			swap(&b,&c);
			swap(&a,&b);
		}
		else {
			swap(&b,&c);
		}
	}
		printf("%.2f %.2f %.2f\n",a,b,c);
	return 0;
}*/
/*int main(){
	int a,b,c,tmp;
	scanf("%d%d%d",&a,&b,&c);
	tmp=(a>b?a:b);
	tmp=(tmp>c?tmp:c);
	printf("%d\n",tmp);
	return 0;
}*/
/*int main(){
	double i,b;
	scanf("%lf",&i);
	if(i<100000)
		b=i/10;
	else if(i>100000&&i<=200000)
		b=100000*0.1+(i-100000)*0.075;
	else if(i>200000&&i<=400000)
		b=100000*0.1+100000*0.075+(i-200000)*0.05;
	else if(i>400000&&i<=600000)
		b=100000*0.1+100000*0.075+200000*0.05+(i-400000)*0.03;
	else if(i>600000&&i<=1000000)
		b=100000*0.1+100000*0.075+200000*0.05+200000*0.03+(i-600000)*0.015;
	else if(i>1000000)
		b=100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(i-1000000)*0.01;
	printf("%.2f\n",b);
	return 0;
}*/
/*int main(){
	int i,sum;
	for(i=1,sum=0;;i++){
		sum+=i;
		if(sum>1000)
			break;
	}
	printf("%d\n",i);
	return 0;
}*/
/*int main(){
	int i,j;
	for(i=1;i<5;i++)
		for(j=1;j<6;j++){
			if(j%5!=0)
				printf("%3d",j*i);
			else
				printf("%3d\n",j*i);
		}
	return 0;
}*/
/*int main(){
	double pi,sum=0,item=1;
	int i,j;
	for(i=1,j=1;fabs(item)>=1E-6;i+=2,item=1*j/(double)i){
		sum+=item;
		j*=-1;
	}
	pi=sum*4;
	printf("PI=%10.8f",pi);
	return 0;
}*/
/*int F(int n){
	if(n>2)
		return F(n-1)+F(n-2);
	else if(n==1||n==2)
		return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",F(n));
	return 0;
}*/
/*int main(){
	int i,tmp,num=2,deno=1;
	double sum=0;
	for(i=1;i<=20;i++){
		sum+=num/(double)deno;
		tmp=deno;
		deno=num;
		num=tmp+deno;
	}
	printf("%f\n",sum);
	return 0;
}*/
/*int main(){
	int i,j,temp,a[10]={4651,2315,1234,481,12,4564,9412,201234,12334,4561};
	for(i=10;i>1;i--)
		for(j=0;j<i;j++)
			if(a[j]>a[j+1]){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	return 0;
} 冒泡排序 bubble sort*/
/*int main(){
	int i,a[5]={1,2,3,4,5};
	for(i=0;i<5;i++)
		printf("初始=%d\n",a[i]);
	memset(a,-1,sizeof(a));
	for(i=0;i<5;i++)
		printf("之后=%d\n",a[i]);
	return 0;
}*/
/*int main(){
	int n=123;
	char s[50];
	sprintf(s,"%d",n);
	printf("%s\n",s);
	puts(s);
	return 0;
}*/
/*int main(){
	int i,tmp,key,a[10];
	for(i=0;i<9;i++)
		scanf("%d",&a[i]);
	getchar();
	scanf("%d",&a[9]);
	for(i=9;a[9]<a[i-1];i--);
	key=i;
	if(key!=9){
		tmp=a[9];
		for(i=8;i>=key;i--)
			a[i+1]=a[i];
		a[key]=tmp;
}
	for(i=0;i<10;i++)
		printf("%d\n",a[i]);
	return 0;
}*/
/*int main(){
	int tmp,i,a[10];
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10/2;i++){
		tmp=a[i];
		a[i]=a[9-i];
		a[9-i]=tmp;
	}
	for(i=0;i<10;i++)
		printf("%d\n",a[i]);
	return 0;
}*/
/*int main(){
	int i,j,n,a[10][10];
	memset(a,0,sizeof(a));
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<=i;j++){
			if(j==i)
				a[i][j]=1;
			else if(j==0)
				a[i][j]=1;
			else 
				a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
	for(i=0;i<n;i++)
		for(j=0;j<=i;j++){
			if(j==i)
				printf("%d\n",a[i][j]);
			else
				printf("%d ",a[i][j]);
		}
	return 0;
}*/
/*int main(){
	char s1[1000],s2[1000];
	int i;
	gets(s1);
	gets(s2);
	for(i=0;s1[i]!='\0'&&s2[i]!='\0';i++){
		if(s1[i]-s2[i]!=0){
			printf("%d",s1[i]-s2[i]);
			break;
		}
	}
	if(s1[i]==s2[i]&&s1[i]=='\0')
		printf("0");
	else if(s1[i]=='\0')
		printf("%d",s2[i]);
	else if(s2[i]=='\0')
		printf("%d",s1[i]);
	return 0;
}*/
/*int main(){
	int i,a[10];
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=9;i>-1;i--)
		printf("%d\n",a[i]);
	return 0;
}*/
/*int F(int n){
	if(n==1||n==2)
		return 1;
	else 
		return F(n-1)+F(n-2);
}
int main(){
	int i;
	for(i=1;i<21;i++)
		printf("%d\n",F(i));
	return 0;
}*/
/*int main(){
	int i,F[21];
	F[1]=F[2]=1;
	for(i=3;i<21;i++)
		F[i]=F[i-1]+F[i-2];
	for(i=1;i<21;i++)
		printf("%d\n",F[i]);
	return 0;
}*/
/*int main(){
	int i,j,temp,a[10];
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);	
	for(i=10;i>1;i--){
		for(j=0;j<i;j++){
			if(a[j]>a[j+1]){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
		printf("%d\n",a[i]);
	return 0;
}*/
/*int main(){
	int j,i,a[2][3],b[3][2];
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<3;i++)
		for(j=0;j<2;j++){
			b[i][j]=a[j][i];
			if(j==1)
				printf("%d\n",b[i][j]);
			else 
				printf("%d ",b[i][j]);
		}
	return 0;
}*/
/*int main(){
	char s1[1000],s2[1000],s3[1000];
	gets(s1);
	gets(s2);
	gets(s3);
	if(strcmp(s1,(strcmp(s2,s3)>0?s2:s3))>0){
		for(int i=0;s1[i]!='\0';i++)
			printf("%c",s1[i]);
	}
	else if(strcmp(s2,s3)>0){
		for(int i=0;s2[i]!='\0';i++)
			printf("%c",s2[i]);
	}
	else {
		for(int i=0;s3[i]!='\0';i++)
			printf("%c",s3[i]);
	}
	return 0;
}*/
/*void reverse(char s[]){
	int length=strlen(s);
	for(int i=0;i<length/2;i++){
		char tmp=s[length-i-1];
		s[length-i-1]=s[i];
		s[i]=tmp;
	}
	s[length]='0';
}
int main(){
	char s[1000];
	gets(s);
	reverse(s);
	for(int i=0;s[i]!='0';i++)
		printf("%c",s[i]);
	return 0;
}*/
/*void vowels(char s1[], char s2[]){
	int j=0,length=strlen(s1);
	for(int i=0;i<length;i++)
		if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
			s2[j++]=s1[i];
	s2[j]='0';
}
int main(){
	char s1[1000],s2[1000];
	gets(s1);
	vowels(s1,s2);
	for(int i=0;s2[i]!='0';i++)
		printf("%c",s2[i]);
	return 0;
}*/
/*int main(){
	int a,b,*p=&a,*q=&b;
	scanf("%d%d",&a,&b);
	if(*p>*q)
		printf("%d %d\n",a,b);
	else
		printf("%d %d\n",b,a);
	return 0;
}*/
/*int main(){
	int a,b,c,*p=&a,*q=&b,*r=&c;
	scanf("%d%d%d",&a,&b,&c);
	if(*p>*q){
		if(*q>*r)
			printf("%d %d %d\n",a,b,c);
		else if(*p>*r)
			printf("%d %d %d\n",a,c,b);
		else 
			printf("%d %d %d\n",c,a,b);
	}
	else if(*q<*r)
		printf("%d %d %d\n",c,b,a);
	else if(*p>*r)
		printf("%d %d %d\n",b,a,c);
	else
		printf("%d %d %d\n",b,c,a);
	return 0;
}*/
/*int main(){
	char *a ="I love China!";
	int n;
	scanf("%d",&n);
	a=a+n;
	printf("%s\n",a);
}*/
/*int main(){
	char s1[20],s2[20],s3[20];
	char *p1=s1,*p2=s2,*p3=s3;
	gets(p1);
	gets(p2);
	gets(p3);	
	if(strcmp(p1,(strcmp(p2,p3)>0?p2:p3))>0){
		puts(strcmp(p2,p3)>0?p3:p2);
		puts(strcmp(p2,p3)>0?p2:p3);
		puts(p1);
	}
	else {
		puts(strcmp(p1,strcmp(p2,p3)>0?p3:p2)>0?(strcmp(p2,p3)>0?p3:p2):p1);
		puts(strcmp(p1,strcmp(p2,p3)>0?p3:p2)>0?p1:(strcmp(p2,p3)>0?p3:p2));
		puts(strcmp(p2,p3)>0?p2:p3);
	}
	return 0;
}*/
/*void input(int *p){
	for(int i=0;i<10;i++)
		scanf("%d",p+i);
}
void output(int *p){
	for(int i=0;i<10;i++)
		printf("%d ",*(p+i));
	printf("\n");
}
void handle(int *p){
	int low=0,high=0;
	for(int i=0;i<10;i++){
		if(*(p+i)<*(p+low))
			low=i;
		if(*(p+i)>*(p+high))
			high=i;
	}
	*p^=*(p+low)^=*p^=*(p+low);
	*(p+9)^=*(p+high)^=*(p+9)^=*(p+high);
}
int main(){
	int a[10],*p=a;
	input(p);
	handle(p);
	output(p);
}*/
/*int main(){
	struct person {
    	char name[20];
    	int count;
	}leader[3] = {"Li",0,"Zhang",0,"Fun",0};
	int n;
	char tmp[6];
	scanf("%d",&n);
	getchar();
	for(int i=1;i<=n;i++){
		gets(tmp);
		if(strcmp(tmp,"Li")==0){
			leader[0].count++;
		}
		else if(strcmp(tmp,"Zhang")==0){
			leader[1].count++;
		}
		else if(strcmp(tmp,"Fun")==0){
			leader[2].count++;
		}
	}
	for(int i=0;i<3;i++)
		printf("%s:%d\n",leader[i].name,leader[i].count);
	return 0;
}*/
/*int main(){
	struct student {
    	int num;
    	char name[20];
    	char sex;
    	int age;
	}a[20];
	struct student *p=a;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d %s %c %d",&p[i].num,p[i].name,&p[i].sex,&p[i].age);
	for(int i=0;i<n;i++)
		printf("%d %s %c %d\n",p[i].num,p[i].name,p[i].sex,p[i].age);
	return 0;
}*/
/*int main(){
	struct {
    	int num;
    	char name[10];
    	char sex;
    	char job;
    	union {
        	int class1;
        	char position[10];
    	}category;
	}a[100];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %s %c %c ",&a[i].num,a[i].name,&a[i].sex,&a[i].job);
		if(a[i].job=='s')
			scanf("%d",&a[i].category.class1);
		else if(a[i].job=='t')
			scanf("%s",a[i].category.position);
	}
	for(int i=0;i<n;i++){
		printf("%d %s %c %c ",a[i].num,a[i].name,a[i].sex,a[i].job);
		if(a[i].job=='s')
			printf("%d\n",a[i].category.class1);
		else if(a[i].job=='t')
			printf("%s\n",a[i].category.position);
	}
}*/
/*struct student{
	int num;
	char name[20];
	int chinese;
	int math;
	int english;
}a[5];
void input(struct student a[]){
	for(int i=0;i<5;i++)
		scanf("%d %s %d %d %d",&a[i].num,a[i].name,&a[i].chinese,&a[i].math,&a[i].english);
}
void print(struct student a[]){
	for(int i=0;i<5;i++)
		printf("%d %s %d %d %d\n",a[i].num,a[i].name,a[i].chinese,a[i].math,a[i].english);
}
int main(){
	input(a);
	print(a);
	return 0;
}*/
/*struct student{
	int num;
	char name[20];
	int chinese;
	int math;
	int english;
}a[10];
double aver[3];
int high,total;
void input(struct student a[]){
	for(int i=0;i<10;i++)
		scanf("%d %s %d %d %d",&a[i].num,a[i].name,&a[i].chinese,&a[i].math,&a[i].english);
}
void calcu(struct student a[]){
	high=0;
	total=a[0].chinese+a[0].math+a[0].english;
	memset(aver,0,sizeof(aver));
	for(int i=0;i<10;i++){
		aver[0]+=a[i].chinese;
		aver[1]+=a[i].math;
		aver[2]+=a[i].english;
		if(total<a[i].chinese+a[i].math+a[i].english){
			total=a[i].chinese+a[i].math+a[i].english;
			high=i;
		}
	}
	for(int i=0;i<3;i++){
		aver[i]/=10;
	}
}
void print(struct student a[]){
		printf("%.2f %.2f %.2f\n",aver[0],aver[1],aver[2]);
		printf("%d %s %d %d %d\n",a[high].num,a[high].name,a[high].chinese,a[high].math,a[high].english);
}
int main(){
	input(a);
	calcu(a);
	print(a);
	return 0;
}*/
/*int main(){
	int n,n1,n2;
	scanf("%d",&n);
	printf("%d",n);
	fscanf(stdin,"%d",&n1);
	fprintf(stdout,"%d",n1);
}*/
/*int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		printf("%d\n",a+b);
	}
	return 0;
}*/
/*int main(){
	int T,a,b;
	scanf("%d",&T);
	while(T>0){//或者直接写成 T-- 
		scanf("%d%d",&a,&b);
		printf("%d\n",a+b);
		T--;
	}
	return 0;
}*/
/*int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF,a||b){
		printf("%d\n",a+b);
	}
	return 0;
}*/
/*int main(){
	int sum,n,a[1000];
	while(scanf("%d",&n),n!=0){
		sum=0;
		while(n--){
			scanf("%d",&a[n]);
			sum+=a[n];
		}
		printf("%d\n",sum);
	}
	return 0;
}*/
/*int main(){
	int n,m,sum,a[1000];
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		if(m!=0){
		sum=0;
		while(m--){
			scanf("%d",&a[m]);
			sum+=a[m];
		}
		printf("%d\n",sum);
		}
		else break;
	}
	return 0;
}*/
/*int main(){
	int sum,n,a[1000];
	while(scanf("%d",&n)!=EOF){
		if(n==0)
			break;
		sum=0;
		while(n--){
			scanf("%d",&a[n]);
			sum+=a[n];
		}
		printf("%d\n",sum);
	}
	return 0;
}*/
/*int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		printf("%d\n\n",a+b);
	}
	return 0;
}*/
/*int main(){
	int n,m,sum,a[1000];
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		if(m!=0){
		sum=0;
		while(m--){
			scanf("%d",&a[m]);
			sum+=a[m];
		}
		printf("%d\n",sum);
		if(n!=0)
			printf("\n");
		}
		else break;
	}
	return 0;
}*/

/*PAT B1001
int main(){
	int count=0,n;
	scanf("%d",&n);
	while(n!=1){
		if(n%2==0)
			n=n/2;
		else
			n=(3*n+1)/2;
		count++;
	}
	printf("%d",count);
	return 0;
}*/

/*PAT B1032*/
/*int main(){
	int b[100010];
	memset(b,0,sizeof(b));
	int n,high,num,s,schID,score;
	high=-1;
	scanf("%d",&n);
	s=n;
	while(n--){
		scanf("%d %d",&schID,&score);
		b[schID]+=score;
	}
	while(s--!=-1){
		if(high<b[s]){
			high=b[s];
			num=s;
		}
	}
	printf("%d %d",num,high);
	return 0;
}*/

/*int main(){
	int a,b,c,d,sum;
	while(scanf("%d%d",&a,&b)!=EOF){
		sum=0;
		if(a<1||a>10000)
			break;
		int L[a+1];
		for(int i=0;i<=a;i++)
			L[i]=1;
		while(b--){
			scanf("%d%d",&c,&d);
			for(int i=c;i<=d;i++)
				L[i]=0;
		}
		for(int i=0;i<=a;i++)
			if(L[i]==1)
				sum++;
		printf("%d\n",sum);
	}
	return 0;
}*/
/*int main(){
	int a,b,x,y,i,sign=1;
	char s1[20],s2[20];
	while(scanf("%s %s",s1,s2)!=EOF){
		a=b=0;
		x=strlen(s1);
		y=strlen(s2);
		sign=1;
		for(i=0;i<x;i++){
			if(s1[i]=='-')
				sign=-1;
			if(s1[i]>='0'&&s1[i]<='9')
				a=a*10+s1[i]-'0';
			if(s1[i]==',')
				continue;
		}
		a=a*sign;
		sign=1;
		for(i=0;i<y;i++){
			if(s2[i]=='-')
				sign=-1;
			if(s2[i]>='0'&&s2[i]<='9')
				b=b*10+s2[i]-'0';
			if(s2[i]==',')
				continue;
		}
		b=b*sign;
		printf("%d\n",a+b);
	}
	return 0;
}*/
/*int main(){
	int i,j,x,y,sum;
	char s1[11],s2[11];
	memset(s1,0,sizeof(s1));
	memset(s2,0,sizeof(s2));
	while(scanf("%s%s",s1,s2)!=EOF){	
		sum=0;
		x=strlen(s1);
		y=strlen(s2);
		for(i=0;i<x;i++){
			for(j=0;j<y;j++){
				sum=sum+(s1[i]-'0')*(s2[j]-'0');
			}
		}
		printf("%d\n",sum);
		memset(s1,0,sizeof(s1));
		memset(s2,0,sizeof(s2));
	}
	return 0;
}*/
/*int main(){
	int i,a[1010],n,odd;
	while(scanf("%d",&n)!=EOF){
		memset(a,0,sizeof(a));
		odd=0;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i]%2==0){
				odd++;
			}
		}
		if(n-odd>odd)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}*/

/*PAT A1046*/
/*自己的想法时间复杂度很大int main(){
	int n,m,a[100010],b[10010],c[10010],sum1[10010],sum2[10010],l[10010];
	memset(a,0,sizeof(a));
	memset(sum1,0,sizeof(sum1));
	memset(sum2,0,sizeof(sum2));	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d%d",&b[i],&c[i]);
	}
	for(int i=0;i<m;i++){
		l[i]=c[i]-b[i];
		if(l[i]<0)
			b[i]^=c[i]^=b[i]^=c[i];
			for(int j=b[i];j<c[i];j++){
				sum1[i]+=a[j-1];
			}
			for(int j=c[i];j<=n;j++){
				sum2[i]+=a[j-1];
			}
			for(int j=0;j<b[i]-1;j++){
				sum2[i]+=a[j];
			}
		printf("%d\n",sum1[i]<sum2[i]?sum1[i]:sum2[i]);
	}
	return 0;
}

/*柳神的想法*/
/*int main(){
	int i,tmp,n,dis[100010],sum,m,a[10010],b[10010];
	memset(dis,0,sizeof(dis));
	scanf("%d",&n);
	dis[0]=0;
	for(i=1;i<=n;i++){
		scanf("%d",&dis[i]);
		dis[i]=dis[i-1]+dis[i];
	}
	sum=dis[n];
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<m;i++){
		if(a[i]>b[i])
			a[i]^=b[i]^=a[i]^=b[i];
		tmp=a[i];
		a[i]=dis[b[i]-1]-dis[a[i]-1];
		b[i]=sum-dis[b[i]-1]+dis[tmp-1];
	}
	for(i=0;i<m;i++)
		printf("%d\n",a[i]>b[i]?b[i]:a[i]);
	return 0;
} */

/*PAT A1065*/ 
/*int main(){
	int t,n;
	long long a,b,c;
	scanf("%d",&t);
	n=t;
	while(t--){
		scanf("%lld%lld%lld",&a,&b,&c);
		if(a<0&&b<0&&a+b>0)
			printf("Case #%d: false\n",n-t);
		if(a>0&&b>0&&a+b<0)
			printf("Case #%d: true\n",n-t);
		if(a+b>c)
			printf("Case #%d: true\n",n-t);
		else
			printf("Case #%d: false\n",n-t);
	}
	return 0;
}*/

/*PAT B1012*/
/*int main(){
	int i,num[1000]={0},n,a[6]={0},a22=0,sign=1,count=0;
	double a4=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++){
		if(num[i]%5==0&&num[i]%2==0)
			a[1]+=num[i];
		if(num[i]%5==1){
			a22+=(num[i]*sign);
			sign*=-1;
			a[2]++;
		}
		if(num[i]%5==2)
			a[3]++;
		if(num[i]%5==3){
			a[4]+=num[i];
			count++;
		}
		if(num[i]%5==4&&num[i]>a[5])
			a[5]=num[i];
	}
	if(count==0)
		a4=0;
	else
		a4=(double)a[4]/count;
	for(i=1;i<4;i++){
		if(a[i]==0)
			printf("N ");
		else if(i==2)
			printf("%d ",a22);
		else 
			printf("%d ",a[i]);
	}
	if(a4==0)
			printf("N ");
		else
			printf("%.1f ",a4);
	if(a[5]==0)
		printf("N ");
	else
		printf("%d ",a[5]);
	return 0;
}*/

/*int main(){
	char a[12],b[12];
	int i,da,db,pa=0,pb=0,x,y,count1=0,count2=0;
	scanf("%s",a);
	scanf("%d",&da);
	scanf("%s",b);
	scanf("%d",&db);
	x=strlen(a);
	y=strlen(b);
	for(i=0;i<x;i++){
		if(a[i]-'0'==da)
			count1++;
	}
	for(i=0;i<y;i++){
		if(b[i]-'0'==db)
			count2++;
	}
	for(i=0;i<count1;i++)
		pa=pa*10+da;
	for(i=0;i<count2;i++)
		pb=pb*10+db;
	printf("%d\n",pa+pb);
}*/

/*PAT B1018*/
/*int main(){
	int i,n,win1[3]={0},win2[3]={0},w1,e1,l1,w2,e2,l2,high1=0,high2=0;
	w1=e1=l1=w2=e2=l2=0;
	char a[100010],b[100010],f1,f2;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		scanf("%c",&a[i]);
		getchar();
		scanf("%c",&b[i]);
		getchar();
		if(a[i]=='C'&&b[i]=='J'){
			win1[1]++;
			w1++;
			l2++;
		}
		else if(a[i]=='C'&&b[i]=='B'){
			win2[0]++;
			l1++;
			w2++;
		}
		else if(a[i]=='J'&&b[i]=='C'){
			win2[1]++;
			l1++;
			w2++;
		}
		else if(a[i]=='J'&&b[i]=='B'){
			win1[2]++;
			w1++;
			l2++;
		}
		else if(a[i]=='B'&&b[i]=='C'){
			win1[0]++;
			w1++;
			l2++;
		}
		else if(a[i]=='B'&&b[i]=='J'){
			win2[2]++;
			l1++;
			w2++;
		}
		else{
			e1++;
			e2++;
		}
	}
	printf("%d %d %d\n",w1,e1,l1);
	printf("%d %d %d\n",w2,e2,l2);
	for(i=0;i<3;i++){
		if(win1[i]>high1){
			high1=win1[i];
			if(i==0)
				f1='B';
			else if(i==1)
				f1='C';
			else 
				f1='J';
		}
	}
	for(i=0;i<3;i++){
		if(win2[i]>high2){
			high2=win2[i];
			if(i==0)
				f2='B';
			else if(i==1)
				f2='C';
			else 
				f2='J';
		}
	}
	printf("%c %c",f1,f2);
	return 0;
}*/

/*PAT B1026*/
/*int main(){
	int c1,c2,c3,hour=0,minute=0,sec=0;
	double second;
	scanf("%d%d",&c1,&c2);
	c3=c2-c1;
	second=(double)c3/100;
	sec=(int)second;
	minute=(sec%3600)/60;
	hour=sec/3600;
	if(second-sec>=0.5)
		sec=(int)second%60+1;
	else 
		sec=(int)second%60;
	printf("%02d:%02d:%02d",hour,minute,sec);
	return 0;
}*/

/*PAT B1046*/
/*int main(){
	int i,n,han1,hua1,han2,hua2,drink1=0,drink2=0,w1,w2;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		w1=w2=0;
		scanf("%d%d%d%d",&han1,&hua1,&han2,&hua2);
		if((han1+han2)==hua2){
			w2=1;
		}
		if((han1+han2)==hua1){
			w1=1;
		}
		if(w1>w2)
			drink2++;
		else if(w1<w2)
			drink1++;
	}
	printf("%d %d",drink1,drink2);
	return 0;
}*/

/*PAT B1008*/
/*int main(){
	int i,n,m,a[100];
	scanf("%d%d",&n,&m);
	m=m%n;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(i=n-m;i<n;i++)
		printf("%d ",a[i]);
	for(i=0;i<n-m;i++){
		if(i!=n-m-1)
			printf("%d ",a[i]);
		else
			printf("%d",a[i]);
	}
	return 0;
}*/

/*PAT A1042不会*/
/*int main(){
	int i,j,n;
	int start[55],tmp[55],end[55];
	char s[6]="SHCDJ";
	scanf("%d",&n);
	for(i=1;i<55;i++)
		start[i]=i;
	for(i=1;i<55;i++)
		scanf("%d",&tmp[i]);
	for(j=1;j<n+1;j++){
		for(i=1;i<55;i++)
			end[tmp[i]]=start[i];
		for(i=1;i<55;i++)
			start[i]=end[i];
	}
	for(i=1;i<55;i++){
		start[i]--;
		if(i!=54)
			printf("%c%d ",s[start[i]/13],start[i]%13+1);
		else
			printf("%c%d",s[start[i]/13],start[i]%13+1);
	}
	return 0;
}*/

/*PAT B1010*/
/*int main(){
	int a[1000],b[1000],i=0,j,flag=0;
	while(scanf("%d%d",&a[i],&b[i])!=EOF){
		if(b[i]!=0){
			a[i]*=b[i];
			b[i]--;
			i++;
			flag=1;
		}
		else if(b[i]==0){
			if(flag==0){
				printf("0 0");
				return 0;
			}
			else{
				b[i]=0;
				a[i]=0;
				break;
			}
		}
	}
	for(j=0;j<i;j++){
		if(j!=i-1&&a[j]!=0)
			printf("%d %d ",a[j],b[j]);
		else if(j==i-1&&a[j]!=0)
			printf("%d %d",a[j],b[j]);
	}
	return 0;
} */

/*PAT A1002*/
/*int main(){
	int i,k,m,tmp,count=0;
	double an1,n1[1010]={0};
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d%lf",&tmp,&an1);
		n1[tmp]=an1;
		count++;
	}
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d%lf",&tmp,&an1);
		if(n1[tmp]==0){
			count++;
			n1[tmp]+=an1;
		}
		else if(n1[tmp]+an1==0.0){
			n1[tmp]+=an1;
			count--;
		}
		else
			n1[tmp]+=an1;
	}
	printf("%d",count);
	for(i=1001;i>=0;i--){
		if(n1[i]!=0.0){
			printf(" %d %.1f",i,n1[i]);
		}
	}
	return 0;
}*/

/*PAT A1009*/
/*int main(){
	int i,j,k,m,tmp,count1[11],count2[11],count=0,flag[1010]={0};
	double an1,n1[1010]={0},n2[1010]={0},out[2020]={0};
	memset(count1,-1,sizeof(count1));
	memset(count2,-1,sizeof(count2));
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d%lf",&tmp,&an1);
		n1[tmp]=an1;//系数项 
		count1[i]=tmp;//指数项 
	}
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d%lf",&tmp,&an1);
		n2[tmp]=an1;
		count2[i]=tmp;
		}
	for(i=0;i<k;i++){
		for(j=0;j<m;j++){
			if(flag[count1[i]+count2[j]]==0){
				out[count1[i]+count2[j]]+=n1[count1[i]]*n2[count2[j]];
				flag[count1[i]+count2[j]]=1;
			}
			else
				out[count1[i]+count2[j]]+=n1[count1[i]]*n2[count2[j]];
		}
	}
	for(i=2019;i>=0;i--){
		if(out[i]!=0.0)
			count++;
	}
	printf("%d",count);
	for(i=2019;i>=0;i--){
		if(out[i]!=0.0){
			printf(" %d %.1f",i,out[i]);
		}
	}
	return 0;
}*/

/*int main(){
	int i,n,a[210]={0},x;
	while(scanf("%d",&n)!=EOF){
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(a[i]==x){
			printf("%d\n",i);
			break;
		}
	}
	if(i==n)
		printf("-1\n");
	}
	return 0;
}*/
/*int main(){
	int n,i,score[1010],x,count;
	while(scanf("%d",&n),n!=0){
		count=0;
		for(i=0;i<n;i++)
			scanf("%d",&score[i]);
		scanf("%d",&x);
		for(i=0;i<n;i++)
			if(score[i]==x)
				count++;
		printf("%d\n",count);
	}
	return 0;
}*/
/*int main(){
	int n,i,j,m;
	char tmp[5];
	struct student{
		char num[5];
		char name[200];
		char gender[20];
		int age;
	}stu[1010];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",stu[i].num);
		scanf("%s",stu[i].name);
		scanf("%s",stu[i].gender);
		scanf("%d",&stu[i].age);
	}
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%s",tmp);
		for(j=0;j<n;j++){
			if(strcmp(tmp,stu[j].num)==0){
				printf("%s %s %s %d\n",stu[j].num,stu[j].name,stu[j].gender,stu[j].age);
				break;
			}
		}
		if(j==n)
			printf("No Answer!\n");
	}
	return 0;
}*/
/*int main(){
	int n,i,j,a[110],m,tmp;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		scanf("%d",&m);
		for(i=0;i<m;i++){
			scanf("%d",&tmp);
			for(j=0;j<n;j++){
				if(a[j]==tmp){
					printf("YES\n");
					break;
				}
			}
			if(j==n)
				printf("NO\n");
		}
	}
	return 0;
}*/
/*int main(){
	struct student{
		int num;
		char name[100];
		char gender[20];
		int age;
	}stu[21];
	int m,n,i,j,k;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%d%s%s%d",&stu[j].num,stu[j].name,stu[j].gender,&stu[j].age);
		}
		scanf("%d",&k);
		for(j=0;j<n;j++){
			if(stu[j].num==k)
				printf("%d %s %s %d\n",stu[j].num,stu[j].name,stu[j].gender,stu[j].age);
		}
	}
	return 0;
}*/

/*PAT B1036*/
/*int main(){
	int n,i,j,m;
	char c;
	scanf("%d %c",&n,&c);
	if(n%2==1)
		m=n/2+1;
	else
		m=n/2;
	for(i=1;i<=m;i++){
		if(i==1){
			for(j=1;j<=n;j++){
				if(j==n)
					printf("%c\n",c);
				else
					printf("%c",c);
			}
		}
		else if(i==m){
			for(j=1;j<=n;j++){
				printf("%c",c);
			}
		}
		else{
			for(j=1;j<=n;j++){
				if(j==n)
					printf("%c\n",c);
				else if(j==1)
					printf("%c",c);
				else 
					printf(" ");
			}
		}
	}
	return 0;
}*/
/*int main(){
	int i,j,h;
	while(scanf("%d",&h)!=EOF){
	for(j=1;j<=h;j++)
		for(i=1;i<=3*h-2;i++){
			if(i<=2*h-2*j)
				printf(" ");
			else if((i>2*h-2*j)&&(i<3*h-2))
				printf("*");
			else if(i==3*h-2)
				printf("*\n");
		}
	}
	return 0;
} */

/*PAT A1031*/
/*int main(){
	char s[81];
	scanf("%s",s);
	int i,j,n1,n2,n3,n,max;
	n=strlen(s);
	for(n1=1;n1<n-2;n1++){
		for(n2=n1;n2<=n;n2++){
			n3=n1;
			if(n1+n2+n3-2==n)
				max=n1;
		}
	}
	n1=n3=max;
	n2=n+2-2*max;
	for(i=1;i<=n1;i++){//i是行 
		for(j=1;j<=n2;j++){//j是列 
			if(i<n1&&j==1)
				printf("%c",s[j+i-2]);
			else if(i<n1&&j<n2&&j>1)
				printf(" ");
			else if(i<n1&&j==n2)
				printf("%c\n",s[n-i]);
			else if(i==n1)
				printf("%c",s[n1-2+j]);
		}
	}
	return 0;
}*/
/*int lea(int n){
	if((n%4==0&&n%100!=0)||n%400==0)
		return 1;
	else 
		return 0;
}
int main(){
	int leap[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
	int i,data1,data2,year1,year2,flag1=0,flag2=0,month1,month2,day1,day2,dif=1;
	scanf("%d%d",&data1,&data2);
	if(data1>data2)
		data1^=data2^=data1^=data2;
	year1=data1/10000;
	year2=data2/10000;
	flag1=lea(year1);
	flag2=lea(year2);
	month1=data1%10000/100;
	month2=data2%10000/100;
	day1=data1%10000%100;
	day2=data2%10000%100;
	if(year1<year2){
		for(i=year1+1;i<year2;i++){
			if(lea(i)==1)
				dif+=366;
			else
				dif+=365;
		}
		while(!((month1==12)&&(day1==31))){
			day1++;
			if(day1==leap[flag1][month1]+1){
				day1=1;
				month1++;
			}
			dif++;
		}
		dif++;
		month1=1;
		day1=1;
		while(!((month1==month2)&&(day1==day2))){
			day1++;
			if(day1==leap[flag2][month1]+1){
				day1=1;
				month1++;
			}
			dif++;
		}
		printf("%d\n",dif);
	}
	else {
		while(!((month1==month2)&&(day1==day2))){
			day1++;
			if(day1==leap[flag2][month1]+1){
				day1=1;
				month1++;
			}
			dif++;
		}
		printf("%d\n",dif);
	}
	return 0;
}*/

/*PAT B1022*/
/*int main(){
	long long a,b,c;
	int z[1000],i=0,d,j;
	scanf("%lld%lld%lld",&a,&b,&d);
	c=a+b;
	do{
		z[i++]=c%d;
		c/=d;
	}while(c!=0);
	for(j=i-1;j>=0;j--){
		printf("%d",z[j]);
	}
	return 0;
}*/

/*PAT B1037*/
/*int main(){
	int g1,s1,k1,g2,s2,k2,p,a,tmp,g3,s3,k3;
	scanf("%d.%d.%d%d.%d.%d",&g1,&s1,&k1,&g2,&s2,&k2);
	p=g1*17*29+s1*29+k1;
	a=g2*17*29+s2*29+k2;
	tmp=a-p;
	if(tmp<0){
		tmp=-tmp;
		g3=tmp/(17*29);
		tmp=tmp%(17*29);
		s3=tmp/29;
		k3=tmp%29;
		printf("-%d.%d.%d",g3,s3,k3);
	}
	
	else {
		g3=tmp/(17*29);
		tmp=tmp%(17*29);
		s3=tmp/29;
		k3=tmp%29;
		printf("%d.%d.%d",g3,s3,k3);
	}
	return 0;	
}*/

/*PAT A1019*/
/*int main(){
	int n,b,tmp[300],i=0,j,flag=0;
	scanf("%d%d",&n,&b);
	do{
		tmp[i++]=n%b;
		n/=b;
	}while(n!=0);
	for(j=i-1;j>=i/2;j--){
		if(tmp[j]!=tmp[i-1-j]){
			printf("No\n");
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("Yes\n");
	for(j=i-1;j>=0;j--){
		if (j!=0)
			printf("%d ",tmp[j]);
		else 
			printf("%d",tmp[j]);
	}
	return 0;
}*/

/*PAT A1027 太复杂了*/
/*int main(){
	int d[3],z[3][6],j,i,k[3];
	scanf("%d%d%d",&d[0],&d[1],&d[2]);
	for(j=0;j<3;j++){
		i=0;
		do{
			z[j][i++]=d[j]%13;
			d[j]/=13;
		}while(d[j]!=0);
		k[j]=i;
	}
	printf("#");
	for(j=0;j<3;j++)
		if(k[j]-1==0){
			printf("0");
			i=0;
			if(z[j][i]==10)
				printf("A");
			else if(z[j][i]==11)
				printf("B");
			else if(z[j][i]==12)
				printf("C");
			else if(z[j][i]<=9)
				printf("%d",z[j][i]);
		}
		else{
			for(i=k[j]-1;i>=0;i--){
					if(z[j][i]==10)
						printf("A");
					else if(z[j][i]==11)
						printf("B");
					else if(z[j][i]==12)
						printf("C");
					else if(z[j][i]<=9)
						printf("%d",z[j][i]);
			}
		}
	return 0;
}*/

/*PAT A1058*/
/*int main(){
	long long g1,s1,k1,g2,s2,k2,p,a,tmp,g3,s3,k3;
	scanf("%d.%d.%d%d.%d.%d",&g1,&s1,&k1,&g2,&s2,&k2);
	p=g1*17*29+s1*29+k1;
	a=g2*17*29+s2*29+k2;
	tmp=a+p;
	g3=tmp/(17*29);
	tmp=tmp%(17*29);
	s3=tmp/29;
	k3=tmp%29;
	printf("%lld.%lld.%lld",g3,s3,k3);
	return 0;	
}*/
/*int main(){
	char s[256];
	int a,i,flag=0;
	while(scanf("%s",s)!=EOF){
		a=strlen(s);
		for(i=0;i<a;i++){
			if(s[i]!=s[a-1-i]){
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}*/

/*PAT B1009*/
/*int main(){
	char s[80][80];
	int i=0,j;
	while(scanf("%s",s[i])!=EOF){
		i++;
	}
	for(j=i-1;j>=0;j--){
		if(j!=0)
			printf("%s ",s[j]);
		else
			printf("%s",s[j]);
	}
	return 0;
}*/
/*bool cmp(int a,int b){
	return a<b;
}
int main(){
	int a[6]={9,4,2,5,6,-1};
	sort(a,&a[6],cmp);
	for(int i=0;i<6;i++)
		printf("%d ",a[i]);
	return 0;
}*/

/*PAT A1025*/
/*struct student{
	char num[15];
	int score;
	int loc;
	int rank;
}stu[30010];
bool cmp(struct student a,struct student b){
	if(a.score!=b.score)
		return a.score>b.score;
	else
		return (strcmp(a.num,b.num)<0);
}
int main(){
	int n,k,i,j,m=0,p;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&k);
		for(j=0;j<k;j++){
			scanf("%s%d",stu[m].num,&stu[m].score);
			stu[m].loc=i+1;
			m++;
		}
		sort(stu+m-k,stu+m,cmp);
        stu[m-k].rank=1;
		for(j=m-k+1;j<m;j++){
			if(stu[j].score==stu[j-1].score){
				stu[j].rank=stu[j-1].rank;
			}
			else {
				stu[j].rank=j+1-(m-k);
			}
		}
	}
	printf("%d\n",m);
	sort(stu,stu+m,cmp);
	j=1;
	for(i=0;i<m;i++){
		if(i>0&&stu[i].score!=stu[i-1].score){
			j=i+1;
		}
		printf("%s %d %d %d\n",stu[i].num,j,stu[i].loc,stu[i].rank);
	}
	return 0;
}*/
/*int main(){
	int n,a[1010];
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		if(n==1){
			printf("%d\n-1\n",a[0]);
		}
		else{
			sort(a,a+n);
			printf("%d\n",a[n-1]);
			for(int i=0;i<n-1;i++){
				if(i==n-2)
					printf("%d\n",a[i]);
				else
					printf("%d ",a[i]);
			}
		}
	}
	return 0;
} */
/*struct student{
	char id[10];
	char name[10];
	int score;
}stu[100010];
bool cmp1(struct student a,struct student b){
	return strcmp(a.id,b.id)<0;
}
bool cmp2(struct student a,struct student b){
	if(strcmp(a.name,b.name)!=0)
		return strcmp(a.name,b.name)<0;
	else 
		return strcmp(a.id,b.id)<0;
}
bool cmp3(struct student a,struct student b){
	if(a.score!=b.score)
		return a.score<b.score;
	else
		return strcmp(a.id,b.id)<0;
}
int main(){
	int n,c,i,count=0;
	while(scanf("%d %d",&n,&c)!=EOF,n!=0){
		for(i=0;i<n;i++){
			scanf("%s %s %d",stu[i].id,stu[i].name,&stu[i].score);
			getchar();
		}
		switch(c){
			case 1:
				sort(stu,stu+n,cmp1);
				break;
			case 2:
				sort(stu,stu+n,cmp2);
				break;
			
			case 3:
				sort(stu,stu+n,cmp3);
				break;
		}
		printf("Case %d:\n",++count);
		for(i=0;i<n;i++)
			printf("%s %s %d\n",stu[i].id,stu[i].name,stu[i].score);
	}
	return 0;
}*/
/*bool cmp(int a,int b){
	return a>b;
}
int main(){
	int i,j,m,sum[30],a[15][15],count=0;
	memset(sum,0,sizeof(sum));
	while(scanf("%d",&m)!=EOF){
	int	count=0;
	memset(sum,0,sizeof(sum));
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			sum[count]+=a[i][j];
		}
		count++;
	}
	for(j=0;j<m;j++){
		for(i=0;i<m;i++){
			sum[count]+=a[i][j];
		}
		count++;
	}
	for(j=0;j<m;j++){
		for(i=0;i<m;i++){
			if(i==j)
				sum[count]+=a[i][j];
		}
	}
	count++;
		for(j=0;j<m;j++){
		for(i=0;i<m;i++){
			if(i+j==m-1)
				sum[count]+=a[i][j];
		}
	}
	count++;
	sort(sum,sum+count,cmp);
	for(i=0;i<count;i++){
		if(i==count-1)
			printf("%d\n",sum[i]);
		else
			printf("%d ",sum[i]);
	}
}
	return 0; 
}*/
/*int n,p[11],hash[11]={0};
void gp(int index){
	if(index==n+1){
		for(int i=1;i<=n;i++){
			printf("%d",p[i]);
		}
		printf("\n");
		return;
	}
	for(int x=1;x<=n;x++){
		if(hash[x]==0){
			p[index]=x;
			hash[x]=1;
			gp(index+1);
			hash[x]=0;
		}
	}
}
int main(){
	n=5;
	gp(1);
	return 0;
}*/

/*PAT  A1011*/
/*int main(){
	double a[4][4],max[4]={0},res=1;
	int i,j;
	char c[4];
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			scanf("%lf",&a[i][j]);
		}
	}
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			if(a[i][j]>max[i]){
				max[i]=a[i][j];
				if(j==1)
				c[i]='W';
				else if(j==2)
				c[i]='T';
				else if(j==3)
				c[i]='L';
			}
		}
	}	
	for(i=1;i<=3;i++)
		res*=max[i];
	res=(res*0.65-1)*2;
	for(i=1;i<=3;i++)
		printf("%c ",c[i]);
	printf("%.2f\n",res);
	return 0;
}*/

/*PAT A1006,空间太大*/
/*struct student{
	char id[16];
	int sinh;
	int sinm;
	int sins;
	int total1; 
	int south;
	int soutm;	
	int souts;
	int total2; 
}stu[1000];
int main(){
	int m,i,min,max=0,low=0,high=0;
	char tmp[10];
	scanf("%d",&m);
	min=3600*60;
	for(i=0;i<m;i++){
		scanf("%s %d:%d:%d %d:%d:%d",stu[i].id,&stu[i].sinh,&stu[i].sinm,&stu[i].sins,&stu[i].south,&stu[i].soutm,&stu[i].souts);
		stu[i].total1=stu[i].sinh*3600+stu[i].sinm*60+stu[i].sins;
		stu[i].total2=stu[i].south*3600+stu[i].soutm*60+stu[i].souts;
		if(stu[i].total1<min){
			low=i;
			min=stu[i].total1;
		}
		if(stu[i].total2>max){
			high=i;
			max=stu[i].total2;
		}
	}
	printf("%s %s",stu[low].id,stu[high].id);
	return 0;
}	*/

/*PAT A1036*/
/*struct student{
	char name[11];
	char gender;
	char id[11];
	int grade;
}tmp,low,high;
int main(){
	int i,mcount=0,fcount=0,n;
	scanf("%d",&n);
	low.grade=100;
	high.grade=0;
	for(i=0;i<n;i++){
		scanf("%s %c %s %d",tmp.name,&tmp.gender,tmp.id,&tmp.grade);
		if(tmp.gender=='M'){
			mcount++;
			if(low.grade>=tmp.grade)
			low=tmp;
		}
		else if(tmp.gender=='F'){
			fcount++;
			if(high.grade<=tmp.grade)
			high=tmp;
		}
	}
	if(mcount!=0&&fcount!=0)
		printf("%s %s\n%s %s\n%d\n",high.name,high.id,low.name,low.id,high.grade-low.grade);
	else if(mcount==0&&fcount!=0)
		printf("%s %s\nAbsent\nNA\n",high.name,high.id);
	else if(mcount==0&&fcount==0)
		printf("Absent\nAbsent\nNA\n");
	else if(mcount!=0&&fcount==0)
		printf("Absent\n%s %s\nNA\n",low.name,low.id);	
}*/

/*PAT A1061*/
int main(){
	int i,j,len[4],count=0;
	char s[4][70],day[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	for(i=0;i<4;i++){
		scanf("%s",s[i]); 
		len[i]=strlen(s[i]);
	}
	for(i=0;i<len[0];i++){
		for(j=0;j<len[1];j++){
			if(s[0][i]>='A'&&s[0][i]<='G'&&s[0][i]==s[1][j]&&count==0){
				printf("%s ",day[s[0][i]-'A']);
				count++;
				continue;
			}
			if(s[0][i]>='A'&&s[0][i]<='N'&&s[0][i]==s[1][j]&&count==1){
				printf("%d:",s[0][i]-'A'+10);
				count++;
			}
		}
	}
	return 0;
}
		
 
