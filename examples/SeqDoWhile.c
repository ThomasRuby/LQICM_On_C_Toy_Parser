int main(){
    int a,b,c,d;
    a = 0;
    b = 42;
    c = 90;
    d = 1;  
    do{ 
        c = 90;
        b = c;
        a = b;
    }while(d < 100);
    while(d < 100){
        a = b;
        b = c;
        c = 90;
        d = d + 1;
    }
}
