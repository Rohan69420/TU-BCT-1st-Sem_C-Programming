for (int i = 0; i < 5; i++){
        fscanf(fp1, " %d %f\n", &rl, &scr);
        printf(" %d %f\n",rl,scr);
        if (i==4)
        for (int j=0;j<5;j++){
            fscanf(fp1, " %s %s %lld\n", nem, ad, &tel);
            printf(" %s %s %lld\n", nem, ad, tel);
        }
    }