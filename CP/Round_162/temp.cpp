while(s<posL.size() && e<negL.size()){
        ll dis = 0, health = 0;
        if(!posL.empty() && s!=posL.size()){
            dis += posL[s];
            health += posH[s++];
        }
        if(!posH.empty() && e!=posH.size()){
            dis += negL[e];
            health += negH[e++];
        }
        compare += dis*k - prevLen - health;
        cout<<"Compare is "<<compare<<endl;
        prevLen = dis;
        if(compare<0){
            flag = 0;
            cout<<"NO"<<endl;
            break;
        }
    }