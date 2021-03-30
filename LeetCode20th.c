typedef struct {
    int elem[10000];
    int n;
}Stack;

void Push(Stack* k, char s){
    k->elem[++k->n] = s;
}

void Pop(Stack* k){
    k->n--;
}

bool isValid(char * s){
    int i;
    Stack k;
    k.n = 0;
    for (int j = 0; j < strlen(s); ++j) {
        if (s[j] == '(' || s[j] == '[' || s[j] == '{'){
            Push(&k,s[j]);
        }
        else if (s[j] == ')') {
            if (k.elem[k.n] == '(')
                Pop(&k);
            else
                return false;
        }
        else if (s[j] == ']'){
            if (k.elem[k.n] == '[')
                    Pop(&k);
                else
                    return false;
            }
        else if (s[j] == '}'){
            if(k.elem[k.n] == '{')
                Pop(&k);
            else
                return false;
        }
    }
    if(k.n == 0){
        return true;
    }
    else
        return false;
}
