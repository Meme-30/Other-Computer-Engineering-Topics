* This is the model for a 45-nm pseudo-NMOS Inverter *


.OPTION POST
.include 'C:\Users\jkaras8780\Downloads\device_45_nm.lib'

.param len= 45nm
.param Wp= len
.param Wn= len

vdd vdd gnd dc 1V

*FOR TRANSIENT ANALYSIS 
*PULSE (V1 V2 	Td  Tr  Tf  PW  Period)
*V1 Vin gnd PULSE (0 1 0n 0.01n 0.01n 4n 8n)


* FOR DC ANALYSIS *
V1 Vin gnd dc 1V

* TRANSISTOR CONNECTION

*UDN	Drain	Gate 	Source	Sub	device_type	Width	Length
M2 	Vout 	gnd 	vdd 	vdd	 pmos 		W=Wp 	L= len
M1 	Vout 	Vin 	gnd 	gnd 	nmos 		W=Wn 	L= len

CL Vout gnd 3f

* MEASURING DELAY IN TRANSIENT ANALYSIS
*.tran 20p 50n
*.measure tpLH TRIG V(Vin) VAL=0.5V FALL=1 TARG V(Vout) VAL=0.5V RISE=1
*.measure tpHL TRIG V(Vin) VAL=0.5V RISE=2 TARG V(Vout) VAL=0.5V FALL=2


* DC ANALYSIS

*.dc <source1> <start1> <stop1> <step1> <source2> <start2> <stop2> <step2>
.DC V1 0V 1V 0.1V



.PRINT V(Vout) V(Vin)
.end