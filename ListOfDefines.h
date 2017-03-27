/* TODO: DEFINE copyright headers.*/

/* This is just an sketch of what our Komondor headers should look like.
 *
 * Copyright (c) 2017, Universitat Pompeu Fabra.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the Institute nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE INSTITUTE AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE INSTITUTE OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *
 * -----------------------------------------------------------------
 *
 * Author  : Sergio Barrachina-Muñoz and Francesc Wilhelmi
 * Created : 2016-12-05
 * Updated : $Date: 2017/03/20 10:32:36 $
 *           $Revision: 1.0 $
 *
 * -----------------------------------------------------------------
 * File description: this file includes lots of fixed constant parameters used to define a KOMONDOR simulation.
 *
 * - Bla bla bla...
 */


// Code parameters
#define FALSE 				0			// Boolean: false
#define TRUE 				1			// Boolean: true
#define INTEGER_SIZE		8			// Size of an integer
#define CHAR_BUFFER_SIZE	1024		// Size of system buffer

// System parameters
#define SLOT_TIME 			0.000009	// Slot time unit [s]

// Physical parameters
#define SPEED_LIGHT			3*pow(10,8)	// Speed of light [m/s]

// Log hierarchy level to make output log file more readable
#define LOG_LVL1	""
#define LOG_LVL2	"  -"
#define LOG_LVL3	"    ·"
#define LOG_LVL4	"       +"
#define LOG_LVL5	"          *"

// Node states
#define STATE_UNKNOWN	-1	// Unknown state (e.g. at the beginning of the simulation)
#define STATE_SENSING	0	// Sensing the channel and decreasing backoff counter when possible according CCA requirements
#define STATE_TX_DATA	1	// Transmitting. Transmission are finished after the transmission duration established.
#define STATE_RX_DATA	2	// Receiving a packet from other node.
#define STATE_WAIT_ACK	3	// Waiting ACK
#define STATE_TX_ACK	4	// Transmitting ACK
#define STATE_RX_ACK	5	// Receiving ACK
#define STATE_TX_RTS	6	// Transmitting RTS
#define STATE_TX_CTS	7	// Transmitting CTS
#define STATE_RX_RTS	8	// Receiving RTS
#define STATE_RX_CTS	9	// Receiving CTS
#define STATE_WAIT_CTS	10	// Waiting CTS packet
#define STATE_WAIT_DATA	11	// Waiting Data after CTS
#define STATE_NAV		12	// Virtual Carrier Sense (process only RTS and CTS)

// Logs
#define PRINT_LOG				0	// Print logs per console
#define WRITE_LOG				1	// Write log in file
#define SAVE_LOG_NONE			0	// Don't save logs
#define SAVE_LOG				1	// Save logs
#define LOG_HEADER_NODE_SIZE	30	// Node log header size

// Transmission initiated or finished
#define TX_INITIATED		0	// Transmission is initiated ('inportSomeNodeStartTX()')
#define TX_FINISHED			1	// Transmission is finished ('inportSomeNodeFinishTX()')
#define TX_NOT_POSSIBLE 	-1	// Transmission is not possible
#define TX_DURATION_NONE	0 	// No transmission duration for logical notifications

// Logical Nack reasons
#define PACKET_NOT_LOST					-1	// Packet is not lost
#define PACKET_LOST_DESTINATION_TX		0	// Destination was already transmitting when the transmission was attempted
#define PACKET_LOST_LOW_SIGNAL			1	// Signal strength is not enough (< CCA) to be decoded
#define PACKET_LOST_INTERFERENCE		2	// There are interference signals greater than cca (collision)
#define PACKET_LOST_PURE_COLLISION		3	// Two nodes transmitting to same destination with signal strengths enough to be decoded
#define PACKET_LOST_LOW_SIGNAL_AND_RX	4	// Destination already receiving and new signal strength was not enough to be decoded
#define PACKET_LOST_SINR_PROB			5	// Packet lost due to SINR probability
#define PACKET_ACK_LOST					6	// ACK lost
#define PACKET_LOST_RX_IN_NAV			7	// Received a packet when being in NAV state

// Destination and source node IDs
#define NODE_ID_NONE	-1
#define WLAN_ID_NONE	-1

// Packets
#define NO_PACKET_ID				-1		// Packet without ID
#define MAX_PACKET_ID				645210	// Maybe some day it is needed :D
#define PACKET_TYPE_DATA			0		// Data packet type
#define PACKET_TYPE_ACK				1		// ACK packet type
#define PACKET_TYPE_MCS_REQUEST		2		// MCS request type
#define PACKET_TYPE_MCS_RESPONSE 	3 		// MCS response type
#define PACKET_TYPE_RTS				4		// RTS type
#define PACKET_TYPE_CTS				5		// CTS type

// Timers
#define PAUSE_TIMER		0	// Try to pause a timer (e.g. backoff)
#define RESUME_TIMER	1	// Try to resume timer

// CCA
#define CCA_NOT_EXCEEDED	0	// CCA is not exceeded (primary channel is free)
#define CCA_EXCEEDED		1	// CCA is exceeded

// Power units conversion
#define PICO_TO_DBM		0	// Convert pW to dBm
#define DBM_TO_PICO		1	// Convert dBm to pW
#define MILLI_TO_DBM	2	// Convert mW to dBm
#define DBM_TO_MILLI	3	// Convert dBm to mW
#define W_TO_DB			4	// Convert W to dB
#define DB_TO_W			5	// Convert dB to W
#define LINEAR_TO_DB	6	// Convert Linear to dB
#define DB_TO_LINEAR	7	// Convert dB to Linear


// Boundary channels
#define FIRST_ONE_IN_ARRAY 			0	// Search first element '1' in an array
#define LAST_ONE_IN_ARRAY			1	// Search last element '1' in an array
#define NUM_OPTIONS_CHANNEL_LENGTH	4	// Number of options of channel lengths (1, 2, 4, 8)

// Channel free - occupied
#define CHANNEL_FREE		0
#define CHANNEL_OCCUPIED	1

// Progress bar
#define PROGRESS_BAR_DELTA		5	// Amount of percentage between two progress bar indicators
#define PROGRESS_BAR_DISPLAY 	1	// Activate progress bar

// C++ macros
#define MIN_VALUE_C_LANGUAGE	0.000001	// Minimum float value accepted by C++ language

// Path-loss models
#define PATH_LOSS_LFS 				0	// Free space - Calculator: https://www.pasternack.com/t-calculator-fspl.aspx
#define PATH_LOSS_OKUMURA_HATA 		1	// Okumura-Hata model - Urban areas
#define PATH_LOSS_INDOOR 			2   // Indoor model (could suite an apartments building scenario)
#define PATH_LOSS_INDOOR_2 			3	// Indoor model without variability
#define PATH_LOSS_SCENARIO_1_TGax	4	// IEEE 802.11ax Scenario 1 (residential)
#define PATH_LOSS_SCENARIO_2_TGax	5	// IEEE 802.11ax Scenario 2 (enterprise)
#define PATH_LOSS_SCENARIO_3_TGax	6	// IEEE 802.11ax Scenario 3 (indoor BSS)
#define PATH_LOSS_SCENARIO_4_TGax	7	// IEEE 802.11ax Scenario 4 (outdoor BSS)
#define PATH_LOSS_SCENARIO_4a_TGax	8	// IEEE 802.11ax Scenario 4a (outdoor BSS + residential)

// Channel bonding model
#define CB_ONLY_PRIMARY		0	// Only Primary Channel used if FREE
#define CB_AGGRESIVE_SCB	1	// Aggressive SCB: if all channels are FREE, transmit. If not, generate a new backoff.
#define CB_LOG2_SCB			2	// Log2 SCB:  if all channels accepted by the log2 mapping are FREE, transmit. If not, generate a new backoff.
#define CB_AGGRESIVE_DCB	3	// Aggressive DCB: TX in all the free channels contiguous to the primary channel
#define CB_LOG2_DCB			4	// Log2 DCB: TX in the larger channel range allowed by the log2 mapping

// Co-channel interference model
#define COCHANNEL_NONE		0	// No co-channel interference
#define COCHANNEL_BOUNDARY	1	// (RECOMMENDED) Boundary co-channel interference: only boundary channels (left and right) used in the TX affect the rest of channels
#define COCHANNEL_EXTREME	2	// Extreme co-channel interference: ALL channels used in the TX affect the rest of channels

// Protocols
#define INCREASE_CW 1		// Command to increase Congestion Window
#define DECREASE_CW 2		// Command to decrease Congestion Window
#define MAX_POWER 20 		// Maximum power that can be transmitted (dBm)


// Node type
#define NODE_TYPE_UNKWNOW	-1	// Unknown (none) node type
#define NODE_TYPE_AP		0	// Access Point
#define NODE_TYPE_STA		1	// Station
#define NODE_TYPE_OTHER		2	// Other kind of devices

// Probability distribution types
#define PDF_DETERMINISTIC	0	// Deterministic (same value as mean)
#define PDF_EXPONENTIAL		1	// Exponential pdf

// MODULATION TYPES TODO https://en.wikipedia.org/wiki/IEEE_802.11ax
#define MODULATION_FORBIDDEN	-1
#define MODULATION_NONE			0
#define MODULATION_BPSK_1_2		1
#define MODULATION_QPSK_1_2		2
#define MODULATION_QPSK_3_4		3
#define MODULATION_16QAM_1_2	4
#define MODULATION_16QAM_3_4	5
#define MODULATION_64QAM_2_3	6
#define MODULATION_64QAM_3_4	7
#define MODULATION_64QAM_5_6	8
#define MODULATION_256QAM_3_4	9
#define MODULATION_256QAM_5_6	10
#define MODULATION_1024QAM_3_4	11
#define MODULATION_1024QAM_5_6	12

/*
const int modulation_rates[4][12] = {	// rows: modulation type, columns: number of channels (1, 2, 4, 8)
		{4,16,24,33,49,65,73,81,98,108,122,135},
		{8,33,49,65,98,130,146,163,195,217,244,271},
		{17,68,102,136,204,272,306,340,408,453,510,567},
		{34,136,204,272,408,544,613,681,817,907,1021,1134}
};
*/

// Information detail level
#define INFO_DETAIL_LEVEL_0		0
#define INFO_DETAIL_LEVEL_1		1
#define INFO_DETAIL_LEVEL_2		2
#define INFO_DETAIL_LEVEL_3		3




/* ************************************************
 * * INPUT FILES TERM INDEX AND CONSOLE ARGUMENTS *
 * ************************************************
 */

// CONSOLE ARGUMENTS
#define NUM_FULL_ARGUMENTS_CONSOLE		11		// Number of arguments entered per console corresponding to full config
#define NUM_PARTIAL_ARGUMENTS_CONSOLE	5		// Number of arguments entered per console corresponding to partial config
#define NUM_PARTIAL_ARGUMENTS_SCRIPT	6		// Number of arguments entered per script corresponding to partial config

#define IX_SYSTEM_INPUT_FILE		1
#define IX_NODES_INPUT_FILE			2
#define IX_SCRIPT_OUTPUT_FILENAME	3
#define IX_SIMULATION_CODE			4
#define IX_WRITE_SYSTEM_LOGS		5
#define IX_WRITE_NODE_LOGS			6
#define IX_PRINT_SYSTEM_LOGS		7
#define IX_PRINT_NODE_LOGS			8
#define IX_SIMULATION_TIME			9
#define IX_RANDOM_SEED				10

#define DEFAULT_SCRIPT_FILENAME		"./output/script_output.txt"
#define DEFAULT_SIMULATION_CODE		"DEFAULT_SIM"
#define DEFAULT_WRITE_SYSTEM_LOGS	0
#define DEFAULT_WRITE_NODE_LOGS		0
#define DEFAULT_PRINT_SYSTEM_LOGS	1
#define DEFAULT_PRINT_NODE_LOGS		1

// File types
#define FILE_TYPE_UNKNOWN		-1
#define FILE_TYPE_APS			0
#define FILE_TYPE_NODES			1
#define FILE_NAME_CODE_APS		"aps"
#define FILE_NAME_CODE_NODES	"nodes"

// System file
#define IX_NUM_CHANNELS				1
#define IX_BASIC_CH_BW				2
#define IX_PDF_BACKOFF				3
#define IX_PDF_TX_TIME				4
#define IX_PACKET_LENGTH			5
#define IX_ACK_LENGTH				6
#define IX_NUM_PACKETS_AGGREGATED	7
#define IX_PATH_LOSS				8
#define IX_CAPTURE_EFFECT			9
#define IX_NOISE_LEVEL				10
#define IX_COCHANNEL_MODEL			11
#define IX_COLLISIONS_MODEL			12
#define IX_SIFS						13
#define IX_CONSTANT_PER				14
#define IX_RTS_LENGTH				15
#define IX_CTS_LENGTH				16

// Nodes file
#define IX_NODE_CODE				1
#define IX_NODE_TYPE				2
#define IX_WLAN_CODE				3
#define IX_DESTINATION_ID			4
#define IX_POSITION_X				5
#define IX_POSITION_Y				6
#define IX_POSITION_Z				7
#define IX_PRIMARY_CHANNEL			8
#define IX_MIN_CH_ALLOWED			9
#define IX_MAX_CH_ALLOWED			10
#define IX_CW_MIN					11
#define IX_CW_MAX					12
#define IX_TPC_MIN					13
#define IX_TPC_DEFAULT				14
#define IX_TPC_MAX					15
#define IX_CCA_MIN					16
#define IX_CCA_DEFAULT				17
#define IX_CCA_MAX					18
#define IX_TX_GAIN					19
#define IX_RX_GAIN					20
#define IX_CHANNEL_BONDING_MODEL	21
#define IX_MODULATION_DEFAULT		22
#define IX_CENTRAL_FREQ				23

// APs file
#define IX_AP_WLAN_CODE					1
#define IX_AP_POSITION_X				2
#define IX_AP_POSITION_Y				3
#define IX_AP_POSITION_Z				4
#define IX_AP_MIN_NUM_OF_STAS			5
#define IX_AP_MAX_NUM_OF_STAS			6
#define IX_AP_MAX_DISTANCE_AP_STA		7
#define IX_AP_PRIMARY_CHANNEL			8
#define IX_AP_MIN_CH_ALLOWED			9
#define IX_AP_MAX_CH_ALLOWED			10
#define IX_AP_CW_MIN					11
#define IX_AP_CW_MAX					12
#define IX_AP_TPC_MIN					13
#define IX_AP_TPC_DEFAULT				14
#define IX_AP_TPC_MAX					15
#define IX_AP_CCA_MIN					16
#define IX_AP_CCA_DEFAULT				17
#define IX_AP_CCA_MAX					18
#define IX_AP_TX_GAIN					19
#define IX_AP_RX_GAIN					20
#define IX_AP_CHANNEL_BONDING_MODEL		21
#define IX_AP_MODULATION_DEFAULT		22
#define IX_AP_CENTRAL_FREQ				23



/* *********************
 * * LOG TYPE ENCODING *
 * *********************
 */

// TODO

// Setup() - A

// Start() - B
#define LOG_B00 "B00" 	// other option: #define LOG_B00 "B00: Start() starts"
#define LOG_B01 "B01"	// Start() ends
#define LOG_B02 "B02"
#define LOG_B03 "B03"
#define LOG_B04 "B04"
#define LOG_B05 "B05"
#define LOG_B06 "B06"
#define LOG_B07 "B07"
#define LOG_B08 "B08"
#define LOG_B09 "B09"
#define LOG_B10 "B10"
#define LOG_B11 "B11"
#define LOG_B12 "B12"
#define LOG_B13 "B13"
#define LOG_B14 "B14"
#define LOG_B15 "B15"
#define LOG_B16 "B16"

// Stop() - C
#define LOG_C00 "C00"	// Stop() starts
#define LOG_C01 "C01"	// Stop() ends
#define LOG_C02 "C02"	// Statistics: Time...
#define LOG_C03 "C03"
#define LOG_C04 "C04"
#define LOG_C05 "C05"
#define LOG_C06 "C06"
#define LOG_C07 "C07"
#define LOG_C08 "C08"
#define LOG_C09 "C09"
#define LOG_C10 "C10"
#define LOG_C11 "C11"
#define LOG_C12 "C12"
#define LOG_C13 "C13"
#define LOG_C14 "C14"
#define LOG_C15 "C15"
#define LOG_C16 "C16"

// InportSomeNodeStartTX() - D
#define LOG_D00 "D00"
#define LOG_D01 "D01"
#define LOG_D02 "D02"
#define LOG_D03 "D03"
#define LOG_D04 "D04"
#define LOG_D05 "D05"
#define LOG_D06 "D06"
#define LOG_D07 "D07"
#define LOG_D08 "D08"
#define LOG_D09 "D09"
#define LOG_D10 "D10"
#define LOG_D11 "D11"
#define LOG_D12 "D12"
#define LOG_D13 "D13"
#define LOG_D14 "D14"
#define LOG_D15 "D15"
#define LOG_D16 "D16"
#define LOG_D17 "D17"
#define LOG_D18 "D18"
#define LOG_D19 "D19"
#define LOG_D20 "D20"
#define LOG_D21 "D21"
#define LOG_D22 "D22"

// InportSomeNodeFinishTX() - E
#define LOG_E00 "E00"
#define LOG_E01 "E01"
#define LOG_E02 "E02"
#define LOG_E03 "E03"
#define LOG_E04 "E04"
#define LOG_E05 "E05"
#define LOG_E06 "E06"
#define LOG_E07 "E07"
#define LOG_E08 "E08"
#define LOG_E09 "E09"
#define LOG_E10 "E10"
#define LOG_E11 "E11"
#define LOG_E12 "E12"
#define LOG_E13 "E13"
#define LOG_E14 "E14"
#define LOG_E15 "E15"
#define LOG_E16 "E16"
#define LOG_E17 "E17"
#define LOG_E18 "E18"
#define LOG_E19 "E19"
#define LOG_E20 "E20"
#define LOG_E21 "E21"
#define LOG_E22 "E22"
#define LOG_E23 "E23"

// endBackoff() - F
#define LOG_F00 "F00"
#define LOG_F01 "F01"
#define LOG_F02 "F02"
#define LOG_F03 "F03"
#define LOG_F04 "F04"
#define LOG_F05 "F05"
#define LOG_F06 "F06"
#define LOG_F07 "F07"
#define LOG_F08 "F08"
#define LOG_F09 "F09"
#define LOG_F10 "F10"
#define LOG_F11 "F11"
#define LOG_F12 "F12"
#define LOG_F13 "F13"
#define LOG_F14 "F14"
#define LOG_F15 "F15"
#define LOG_F16 "F16"

// myTXFinished() - G
#define LOG_G00 "G00"
#define LOG_G01 "G01"
#define LOG_G02 "G02"
#define LOG_G03 "G03"
#define LOG_G04 "G04"
#define LOG_G05 "G05"
#define LOG_G06 "G06"
#define LOG_G07 "G07"
#define LOG_G08 "G08"
#define LOG_G09 "G09"
#define LOG_G10 "G10"
#define LOG_G11 "G11"
#define LOG_G12 "G12"
#define LOG_G13 "G13"
#define LOG_G14 "G14"
#define LOG_G15 "G15"
#define LOG_G16 "G16"

// inportNackReceived() - H
#define LOG_H00 "H00"
#define LOG_H01 "H01"
#define LOG_H02 "H02"
#define LOG_H03 "H03"
#define LOG_H04 "H04"
#define LOG_H05 "H05"
#define LOG_H06 "H06"
#define LOG_H07 "H07"
#define LOG_H08 "H08"
#define LOG_H09 "H09"
#define LOG_H10 "H10"
#define LOG_H11 "H11"
#define LOG_H12 "H12"
#define LOG_H13 "H13"
#define LOG_H14 "H14"
#define LOG_H15 "H15"
#define LOG_H16 "H16"

#define LOG_I00 "I00"
#define LOG_I01 "I01"
#define LOG_I02 "I02"
#define LOG_I03 "I03"
#define LOG_I04 "I04"
#define LOG_I05 "I05"
#define LOG_I06 "I06"
#define LOG_I07 "I07"
#define LOG_I08 "I08"
#define LOG_I09 "I09"
#define LOG_I10 "I10"
#define LOG_I11 "I11"
#define LOG_I12 "I12"
#define LOG_I13 "I13"
#define LOG_I14 "I14"
#define LOG_I15 "I15"
#define LOG_I16 "I16"

// Informative logs - Z
#define LOG_Z00 "Z00"	// Node info
#define LOG_Z01 "Z01"
#define LOG_Z02 "Z02"
#define LOG_Z03 "Z03"
#define LOG_Z04 "Z04"
#define LOG_Z05 "Z05"
#define LOG_Z06 "Z06"
#define LOG_Z07 "Z07"
#define LOG_Z08 "Z08"
#define LOG_Z09 "Z09"
#define LOG_Z10 "Z10"
#define LOG_Z11 "Z11"
#define LOG_Z12 "Z12"
#define LOG_Z13 "Z13"
#define LOG_Z14 "Z14"
#define LOG_Z15 "Z15"
#define LOG_Z16 "Z16"

