void ataque(){
  
  
  d();
  
  if( sonar[0].ping_cm()>1 && sonar[0].ping_cm()<50 )
   {
    d();  
   Serial.println(sonar[0].ping_cm());
    chocar(1000);
    d();
   }

   
d();
     
   if( sonar[1].ping_cm()>1 && sonar[1].ping_cm()<50 )
   {
    d();  
   Serial.println(sonar[1].ping_cm());
    chocar(2000);
    d();
   }
      
d();
        
   if( sonar[2].ping_cm()>1 && sonar[2].ping_cm()<50 )
   {
    d();  
    while(sonar[2].ping_cm()<50 )
    { 
   d();
    Rotar(1250,1650);
    d();
    if(sonar[0].ping_cm()>1)
    {
      break;
      }
      if(sonar[1].ping_cm()>1)
    {
      break;
      }
   }
   }

d();   
   
   if( sonar[3].ping_cm()>1 && sonar[3].ping_cm()<50 )
   {
    d();  
    while(sonar[3].ping_cm()<50 )
    { 
     d();
    Rotar(1650,1250);
    d();
     if(sonar[0].ping_cm()>1)
    {
      break;
      }
      if(sonar[1].ping_cm()>1)
    {
      break;
      }
   }
   }
   
}

