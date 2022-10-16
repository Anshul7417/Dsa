 int i = 0, firstStepOption, secondStepOption;
        while(i < n) {
            if(arr[i] == x) {
                return i;
            }
            firstStepOption = i + 1;
            secondStepOption = abs(x - arr[i]) / k;
            i = max(firstStepOption, secondStepOption);
        }
        return -1;
    }