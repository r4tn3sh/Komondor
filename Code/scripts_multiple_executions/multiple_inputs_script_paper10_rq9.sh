# define execution parameters
T_IT = 100
SIM_TIME=1.01
SEED=1992
# compile KOMONDOR

cd ..
cd main
./build_local
echo ""
echo ""
echo "***********************************************************************"
echo "PAPER #10 - reserach question 9: general effect ot Tit - Tit = $(printf %03d $T_IT) ms"
echo "***********************************************************************"
echo ""
echo ""
echo ""

  
for TRAFFIC in 1 4
do

	for (( PRIMARY=0; PRIMARY<=3; PRIMARY++ ))
	do  

		for LOAD in 10 20 50 100
		do  

			for (( SCENARIO=1; SCENARIO<=100; SCENARIO++ ))
			do  
				
echo "- executing input_nodes_n4_tm$(printf %d $TRAFFIC)_pr$(printf %d $PRIMARY)_lA$(printf %03d $LOAD)mbps_s$(printf %03d $SCENARIO).csv"

./komondor_main ../input/input_paper10/nodes_rq9/input_nodes_n4_tm$(printf %d $TRAFFIC)_pr$(printf %d $PRIMARY)_lA$(printf %03d $LOAD)mbps_s$(printf %03d $SCENARIO).csv ../input/input_paper10/agents_rq8/Tit_$(printf %03d $T_IT)ms/agents_monitoring_primary$(printf %d $PRIMARY).csv ../output/script_output.txt sim_tm$(printf %d $TRAFFIC)_pr$(printf %d $PRIMARY)_lA$(printf %03d $LOAD)mbps_s$(printf %03d $SCENARIO) 0 1 1 1 1 $SIM_TIME $SEED >> ../output/logs_console.tx


			done		

		done


	   
	done
done
