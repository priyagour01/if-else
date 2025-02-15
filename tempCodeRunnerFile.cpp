
    //     }
    // }

    int f = 1;   // store hightest factor
    //for(int i=1; i<num; i++) 
      for(int i=1; i<=num/2; i++) {
        if (num%i==0) 
            f = i;
    }
        cout<<f;