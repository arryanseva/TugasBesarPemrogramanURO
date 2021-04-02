/*Program pembasmian kecoak raksasa menggunakan Urang Robot Orang*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int nextstepx(int nextstep,int posisix, int posisiy );//Fungsi untuk menggerakkan kecoak raksasa secara random satu satuan ketika ditembak (x)
int nextstepx(int nextstep,int posisix, int posisiy ){
    if(nextstep ==1){
        if((posisiy+1)>=0){
            posisix = posisix;
            posisiy = posisiy + 1;
            return(posisix);
        }
        else{
            posisix = posisix;
            posisiy = posisiy;
            return(posisix);
        }
    }
    else if(nextstep == 2){
        if((posisiy-1)>=0){
            posisix = posisix;
            posisiy = posisiy - 1;
            return(posisix);
        }
        else{
            posisix = posisix;
            posisiy = posisiy;
            return(posisix);
        }
    }
    else if(nextstep == 3){
        if((posisix+1)>=0){
            posisix = posisix + 1;
            posisiy = posisiy;
            return(posisix);
        }
        else{
            posisix = posisix;
            posisiy = posisiy;
            return(posisix);
        }
    }
    else{
        if((posisix-1)>=0){
            posisix = posisix - 1;
            posisiy = posisiy;
            return(posisix);
        }
        else{
            posisix = posisix;
            posisiy = posisiy;
            return(posisix);
        }    
    }
}
int nextstepy(int nextstep,int posisix, int posisiy ); //Fungsi untuk menggerakkan kecoak raksasa secara random satu satuan ketika ditembak (x)
int nextstepy(int nextstep,int posisix, int posisiy ){
    if(nextstep ==1){
        if((posisiy+1)>=0){
            posisix = posisix;
            posisiy = posisiy + 1;
            return(posisiy);
        }
        else{
            posisix = posisix;
            posisiy = posisiy;
            return(posisiy);
        }
    }
    else if(nextstep == 2){
        if((posisiy-1)>=0){
            posisix = posisix;
            posisiy = posisiy - 1;
            return(posisiy);
        }
        else{
            posisix = posisix;
            posisiy = posisiy;
            return(posisiy);
        }
    }
    else if(nextstep == 3){
        if((posisix+1)>=0){
            posisix = posisix + 1;
            posisiy = posisiy;
            return(posisiy);
        }
        else{
            posisix = posisix;
            posisiy = posisiy;
            return(posisiy);
        }
    }
    else{
        if((posisix-1)>=0){
            posisix = posisix - 1;
            posisiy = posisiy;
            return(posisiy);
        }
        else{
            posisix = posisix;
            posisiy = posisiy;
            return(posisiy);
        }    
    }
}
int main(){
    int robotx = 0, roboty = 0,hprobot = 100,damagerobot = 50,rangerobot =6;
    int kecoakrandx,kecoakrandy, hpkecoakrand = 100,damagekecoak = 2,rangekecoak=3;
    int komando,nextstepkecoak,kill,totalkecoaksummon;
    float jarak;
    srand(time(0));
    kecoakrandx = rand()%10;
    kecoakrandy = rand()%10;
    printf("**Selamat datang diprogram pertempuran Urang Robot Orang melawan kecoak raksasa**\n\n");
    printf("'Dalam pembasmiannya, Urang Robot Orang bisa menembak kecoak raksasa sampai mati,");
    printf(" HP Urang Robot Orang dan kecoak raksasa bernilai 100 poin dan damage yang dihasilkan oleh");
    printf(" Robot ketika menembak adalah 50 poin sedangkan oleh kecoak raksasa adalah 2 poin. Karena amunisi terbatas,");
    printf(" maka setiap peluru yang ditembakan oleh Urang Robot orang akan menyerap HP  nya 1 poin");
    printf(" dan jarak maksimal agar dapat menembak adalah 6 satuan terhadap jarak raksasa dan 3 satuan untuk terkena serangan dari kecoak raksasa.'");
    printf(" \n\n--Selamat berjuang dalam membasmi kecoak raksasa!--\n\n");
    while((hprobot>0) && (hpkecoakrand >0)){ //Robot vs 1 kecoak random terdahulu
        jarak = sqrt(((robotx-kecoakrandx)*(robotx-kecoakrandx)) + ((roboty-kecoakrandy)*(roboty-kecoakrandy)));
        printf("Posisi robot : (%d,%d) dan HP = %d\n",robotx,roboty,hprobot);
        printf("Posisi kecoak random : (%d,%d) dan HP = %d\n",kecoakrandx,kecoakrandy,hpkecoakrand);
        printf("Jarak ke kecoak adalah %0.3f\n\n",jarak);
        printf("Beri komando pada robot\n1.Maju 2.Mundur 3.Kekanan 4.Kekiri 5.Menembak 6.Keluar\n");
        scanf("%d",&komando); //Input yang memengaruhi pergerakan robot selanjutnya
        if(komando == 1){ // Maju
            if((roboty+1)<0 || ((robotx == kecoakrandx) &&((roboty+1) == kecoakrandy))){
                robotx = robotx;
                roboty = roboty;
            }
            else{
                robotx = robotx;
                roboty = roboty + 1;
            }
        }
        else if(komando == 2){ // Mundur
            if((roboty-1)<0 || ((robotx == kecoakrandx) &&((roboty-1) == kecoakrandy))){
                robotx = robotx;
                roboty = roboty;
            }
            else{
                robotx = robotx;
                roboty = roboty - 1;
            }
        }
        else if(komando == 3){ // Kanan
            if((robotx+1)<0 || (((robotx+1) == kecoakrandx) &&(roboty == kecoakrandy))){
                robotx = robotx;
                roboty = roboty;
            }
            else{
                robotx = robotx + 1;
                roboty = roboty;
            }
        }
        else if(komando == 4){ // Kiri
            if((robotx-1)<0 || (((robotx-1) == kecoakrandx) &&(roboty == kecoakrandy))){
                robotx = robotx;
                roboty = roboty;
            }
            else{
                robotx = robotx - 1;
                roboty = roboty;
            }
        }
        else if(komando == 5){
            hprobot = hprobot - 1; // HP robot berkurang setiap menembak sebanyak 1 poin
            if (jarak <= rangerobot){ // Kondisi robot dapat menembak yaitu jarak antara robot dan kecoak < 6 satuan
                printf("DUARRR, anda berhasil menembak\n\n");
                hpkecoakrand = hpkecoakrand - damagerobot; //HP kecoak yang tertembak berkurang sebanyak 50 poin
                nextstepkecoak= (1) + rand()%3; // Angka random yang akan menentukan gerakan kecoak selanjutnya ketika ditembak (baik jarak < atau > dari 6)
                kecoakrandx = nextstepx(nextstepkecoak,kecoakrandx,kecoakrandy); //Pergerakan kecoak selanjutnya
                kecoakrandy = nextstepy(nextstepkecoak,kecoakrandx,kecoakrandy);
            }
            else{
                printf("Kecoak tidak dalam range menembak, proses menembak gagal\n\n"); // Gagal karena jarak menembak tidak tepat
                nextstepkecoak= (1) + rand()%3;
                kecoakrandx = nextstepx(nextstepkecoak,kecoakrandx,kecoakrandy);
                kecoakrandy = nextstepy(nextstepkecoak,kecoakrandx,kecoakrandy);
            }
        }
        else{
            hprobot = 0; //Program keluar
        }
        jarak = sqrt(((robotx-kecoakrandx)*(robotx-kecoakrandx)) + ((roboty-kecoakrandy)*(roboty-kecoakrandy)));
        if((jarak <= 3) && (hpkecoakrand > 0 && (hprobot > 0))){ // Seluruh kecoak yang dekat dengan robot dengan jarak < 3 , masing masing menembak  ke robot
                    printf("DUARRR, anda tertembak musuh\n");
                    hprobot = hprobot - damagekecoak;
        }
    }
    if(hprobot<0){
        hprobot = 0;
    }
    printf("Posisi robot sekarang adalah (%d,%d) dan HP = %d\n",robotx,roboty,hprobot);
    printf("Posisi kecoak random sekarang adalah (%d,%d) dan HP = %d\n",kecoakrandx,kecoakrandy,hpkecoakrand);
    printf("Jarak ke kecoak adalah %0.3f\n",jarak);
    if(hpkecoakrand == 0 && hprobot > 0){ // Kecoak raksasa dengan jumlah tertentu akan muncul dalam range 30 x 30 ketika kecoak pertama mati
        kill = 1;
        printf("Total kecoa yang telah dibunuh : %d\n",kill);
        hprobot = 100;
        printf("\nSELAMAT ANDA TELAH MEMBUNUH MUSUH PERTAMA\n");
        printf("MEMULAI MEMBUKA MAP SEJUMLAH KECOAK\n\n");
        totalkecoaksummon = (20) + rand()%70; //Jumlah kecoak yang tersummon 
        int datakecoak[totalkecoaksummon][4],hpkecoak; //datakecoak[i][0] posisi x,datakecoak[i][1] posisi y, datakecoak[i][2] jarak ke robot, datakecoak[i][3] HP kecoak
        int nomorkecoa,cek; //nomor kecoa merupakan kecoak yang ingin ditembak
        for(int i = 0; i < totalkecoaksummon ; i++){ // Mengisi data posisi x, y, jarak, dan HP secara random untuk setiap kecoak
            for(int j = 0 ; j < 4 ; j++){
                datakecoak[i][j] = rand()%30;
                datakecoak[i][3] = 100;
                datakecoak[i][2]= sqrt(((robotx-datakecoak[i][0])*(robotx-datakecoak[i][0])) + ((roboty-datakecoak[i][1])*(roboty-datakecoak[i][1])));
            }
        }
        char *map[962];
        int konversi;
        while(hprobot > 0 && (kill - 1) != totalkecoaksummon){
            printf("Posisi robot sekarang : (%d,%d) dan HP = %d\n",robotx,roboty,hprobot);
            for(int i = 0; i < totalkecoaksummon ; i++){
                printf("Posisi kecoak -%d : (%d,%d), jarak : %d, HP: %d\n",i+1,datakecoak[i][0],datakecoak[i][1],datakecoak[i][2],datakecoak[i][3]);
            }

            for(int i = 0; i < 962 ; i++){
                map[i] = ".";
            }
            for (int i = 0 ; i < totalkecoaksummon; i++){ //Mendata posisi kecoak pada peta dengan simbol "K"
                if(datakecoak[i][3]>0){
                    konversi = ((30-datakecoak[i][1])*31) + datakecoak[i][0] + 1 ;
                    map[konversi] = "K";
                }
                else{
                    konversi = ((30-datakecoak[i][1])*31) + datakecoak[i][0] + 1 ;
                    map[konversi] = ".";
                }
            }
            map[((30-roboty)*31) + robotx + 1 ] = "R";
            for (int i = 1 ; i < 962 ; i++){//Mencetak posisi robot dan kecoak pada peta
                if(i%31 == 0){
                    printf("%c\n",*map[i]);
                }
                else{
                    printf("%c ",*map[i]);
                }
            }
            printf("\nBeri komando pada robot\n1.Maju 2.Mundur 3.Kekanan 4.Kekiri 5.Menembak 6.Keluar\n");
            scanf("%d",&komando); // Input yang menentukkan posisi robot selanjutnya dan menahan untuk tidak menabrak 
            if(komando == 1){
                cek = 0;
                for(int i = 0 ; i < totalkecoaksummon ; i++){
                    if(robotx == datakecoak[i][0] && (roboty+1) == datakecoak[i][1]){
                        cek = cek + 1;
                    }
                }
                if((roboty+1 < 0) || cek > 0){
                    robotx = robotx;
                    roboty = roboty;
                }
                else{
                    robotx = robotx;
                    roboty = roboty + 1;
                }
            }
            else if(komando == 2){
                cek = 0;
                for(int i = 0 ; i < totalkecoaksummon ; i++){
                    if(robotx == datakecoak[i][0] && (roboty-1) == datakecoak[i][1]){
                        cek = cek + 1;
                    }
                }
                if((roboty-1 < 0) || cek > 0){
                    robotx = robotx;
                    roboty = roboty;
                }
                else{
                    robotx = robotx;
                    roboty = roboty-1;
                }
            }
            else if(komando == 3){
                cek = 0;
                for(int i = 0 ; i < totalkecoaksummon ; i++){
                    if((robotx+1) == datakecoak[i][0] && (roboty) == datakecoak[i][1]){
                        cek = cek + 1;
                    }
                }
                if((robotx+1 < 0) || cek > 0){
                    robotx = robotx;
                    roboty = roboty;
                }
                else{
                    robotx = robotx + 1;
                    roboty = roboty;
                }
            }
            else if(komando == 4){
                cek = 0;
                for(int i = 0 ; i < totalkecoaksummon ; i++){
                    if((robotx-1) == datakecoak[i][0] && (roboty) == datakecoak[i][1]){
                        cek = cek + 1;
                    }
                }
                if((robotx-1 < 0) || cek > 0){
                    robotx = robotx;
                    roboty = roboty;
                }
                else{
                    robotx = robotx - 1;
                    roboty = roboty;
                }
            }
            else if(komando == 5){
                printf("Masukkan nomor kecoa yang mau ditembak : ");
                scanf("%d",&nomorkecoa);
                nomorkecoa = nomorkecoa - 1;
                hprobot = hprobot - 1;
                if (datakecoak[nomorkecoa][2] <= rangerobot){ //Next step dari kecoak yang ditembak (memenuhi jarak < 6 ataupun > 6)
                    printf("DUARRR, anda berhasil menembak kecoa nomor -%d\n\n",nomorkecoa + 1);
                    datakecoak[nomorkecoa][3] = datakecoak[nomorkecoa][3] - damagerobot;
                    nextstepkecoak= (1) + rand()%3;
                    datakecoak[nomorkecoa][0] = nextstepx(nextstepkecoak,datakecoak[nomorkecoa][0],datakecoak[nomorkecoa][1]);
                    datakecoak[nomorkecoa][1] = nextstepy(nextstepkecoak,datakecoak[nomorkecoa][0],datakecoak[nomorkecoa][1]);
                    if(datakecoak[nomorkecoa][3] == 0){
                        kill = kill + 1;
                    }
                }
                else{
                    printf("Kecoak tidak dalam range menembak, proses menembak gagal\n\n");
                    nextstepkecoak= (1) + rand()%3;
                    datakecoak[nomorkecoa][0] = nextstepx(nextstepkecoak,datakecoak[nomorkecoa][0],datakecoak[nomorkecoa][1]);
                    datakecoak[nomorkecoa][1] = nextstepy(nextstepkecoak,datakecoak[nomorkecoa][0],datakecoak[nomorkecoa][1]);
                }
            }
            else{
                hprobot = 0;
            }
            for(int i = 0 ; i < totalkecoaksummon ; i++){
                datakecoak[i][2]= sqrt(((robotx-datakecoak[i][0])*(robotx-datakecoak[i][0])) + ((roboty-datakecoak[i][1])*(roboty-datakecoak[i][1])));
                if((datakecoak[i][2] <= 3) && (datakecoak[i][3]>0) && (hprobot > 0)){
                    printf("DUARRR, anda tertembak oleh kecoak -%d\n",i+1);
                    hprobot = hprobot - damagekecoak;
                }
            }
        }
    }
    printf("Total kecoak yang berhasil anda bunuh adalah : %d\n",kill); //Output ketika mati tetapi tidak menghabisi seluruh kecoak raksasa
    if((kill-1) == totalkecoaksummon){
        printf("Selamat, seluruh kecoak raksasa telah musnah!");
    }
    printf("Masukkan apapun agar benar - benar mengakhiri program : ");
    scanf("%d",komando);
}
