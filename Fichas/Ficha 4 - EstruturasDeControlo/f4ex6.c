int main(){
    int items = 0;
    int itemsPorLinha = 16;
    for (int i = 32 ; i <= 127; i++){
        printf("%c (%-3d)",i,i);
        items++;
        if(items % itemsPorLinha == 0){
            printf("\n");
        }

    }
}