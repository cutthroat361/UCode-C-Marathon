int mx_atoi(const char*);
void mx_printchar(char);
void mx_printint(int);
int main(int argc, char *argv[]){
    int result=0;
    for(int i=1; i<argc;i++){
        result+=mx_atoi(argv[i]);
    }
    if (argv>0){
        mx_printint(result);
    }
}
