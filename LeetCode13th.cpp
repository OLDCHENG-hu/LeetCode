int romanToInt(char * s){
    int i=0;
    int x=0;
  for(i=0;i<strlen(s);i++)
  {
    if(s[i]=='M')
    x=x+1000;
    if(s[i]=='D')
    x=x+500;
    if(s[i]=='C'){
    if(s[i+1]=='M'){
    x=x+900;
    i++;
    }
    else if(s[i+1]=='D'){
    x=x+400;
    i++;
    }
    else
    x=x+100;
    }
    if(s[i]=='L')
    x=x+50;
    if(s[i]=='X'){
    if(s[i+1]=='L'){
    x=x+40;
    i++;
    }
    else if(s[i+1]=='C'){
    x=x+90;
    i++;
    }
    else
    x=x+10; 
    }
    if(s[i]=='V')
    x=x+5;
    if(s[i]=='I'){
    if(s[i+1]=='V'){
    x=x+4;
    i++;
    }
    else if(s[i+1]=='X'){
    x=x+9;
    i++;
    }
    else
    x=x+1; 
    }
}
return x;
}
