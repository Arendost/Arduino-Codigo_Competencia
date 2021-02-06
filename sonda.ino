void d()
{

    for (uint8_t i = 0; i < SONAR_NUM; i++) { 
   sonar[i].ping_cm();
   delay(30);}

  
}
