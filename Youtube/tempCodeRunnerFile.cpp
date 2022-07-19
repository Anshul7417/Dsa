
        ans=(bit*pow(10,i))+ans;
        p=p>>1;
        i++;

    }
    int binary = (~ans)+1;
    cout<<binary;
    return 0;
}