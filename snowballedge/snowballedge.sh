!#/bin/sh
count=0
declare -i compteur ;
for((compteur =0; compteur <=1000; compteur++))
do
        old =$compteur
        echo "la valeur du fichier transferer est N%:$compteur"
        time aws s3 cp --profile defaut --endpoint http://192.168.106.129:8080 "/home/floranana/snowball.$compteur.img" "s3://hadinger-demo"
        
