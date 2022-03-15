. pretty.sh

cd $DIR

echo "pwd > ../output/pwd" | $RUN
echo "echo $PATH > ../output/path" | $RUN

echo "\n[mini]\n[bash]\n"

cd ..
echo "$P---pwd---$R"
pwd >> output/pwd
cat output/pwd

echo "$P\n---path---$R"
echo $PATH >> output/path
cat output/path

#test_errors:
	# sh ../errors.sh