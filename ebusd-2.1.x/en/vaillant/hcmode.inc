# type (r[1-9];w;u),circuit,name,[comment],[QQ],ZZ,PBSB,[ID],field1,part (m/s),datatypes/templates,divider/values,unit,comment
# HC operation mode,,,,,,,,,,,,,
*r,,,,,,"B504",,,,,,,
*w,,,,,,"B505",,,,,,,
r,,DateTime,Date Time,,,,00,,,dcfstate;btime;bdate;temp2,,,
r,,Mode,Mode/Temperature,,,,01,,,temp0:tempdesired;mcmode:operationmode;days:floorpavingdryingday;temp0;mcmode:teleswitchmode;mctype7:mixertype;IGN;daynight,,,
r,,Params,TempDesired/TempDesiredLow/HeatingCurve/Type/ShutdownTemp/?/FlowTempMin/FlowTempMax/MaxPreHeating,,,,09,,,temp0:tempdesired;temps:tempdesiredlow;curve;mctype7:mixertype;temp0:shutdowntemp;minutes0:pumpidleperiod;temp0:flowtempmin;temp0:flowtempmax;hours:maxpreheating,,,
r,,Status,Status flow desired/current,,,,0D,,,temp0:flowtempdesired;onoff:status;temp:flowtemp;IGN,,,
r,,Status0a,Status flow temperature/mixer/pump/desired flow temperature,,,,0A,,,temp;mctype7;onoff;onoff;temp0
r,,Status16,Outside temperature,,,,16,,,temp,,,
w,,SetTempDesired,Set desired temperature,,,,01,,,temp0,,,
w,,SetMode,Set operation mode,,,,02,,,mcmode,,,
w,,SetTempDesiredLow,Set desired low temperature,,,,0a,,,temp0,,,
w,,SetHeatingCurve,Set heating curve,,,,0b,,,curve,,,
w,,SetShutdownTemp,Set outside shutdown temperature,,,,0c,,,temp0,,,
w,,SetFlowTempMin,Set min flow temperature,,,,0e,,,temp0,,,
w,,SetFlowTempMax,Set max flow temperature,,,,0f,,,temp0,,,
w,,SetMaxPreHeating,Set max pre-heating,,,,10,,,hours,,,

# HC operation mode2,,,,,,,,,,,,,
*r,,,,,,"B511",,,,,,,
*uw,,,,,,"B510",,,,,,,
uw,,SetMode,Operation Mode,,,,00,,,hcmode,,,,flowtempdesired,,temp1,,,,hwctempdesired,,temp1,,,,hwcflowtempdesired,,temp0,,,,,,IGN:1,,,,disablehc,,BI0,,,,disablehwctapping,,BI1,,,,disablehwcload,,BI2,,,,,,IGN:1,,,,remoteControlHcPump,,BI0,,,,releaseBackup,,BI1,,,,releaseCooling,,BI2,,,,
#potential last byte: currentmode,s,UCH,0=off;1=standby;2=heat;3=water,,
r,,Status01,Vorlauftemperatur/Rücklauftemperatur/Aussentemperatur/WW Temperatur/Speichertemperatur/Pumpenstatus,,,,01,,,temp1;temp1;temp2;temp1;temp1;pumpstate,,,
r,,Status02,Betriebsart/Maximaltemperatur/ReglerCurrentTEMP/Maximaltemperatur/ReglerCurrentTemp,,,,02,,,hwcmode;temp0;temp1;temp0;temp1,,,

*uw,,,,,,"B512",,,,,,,
uw,,StatusCirPump,Status circulation pump,,,,00,,,UCH,0=off;100=on,,
