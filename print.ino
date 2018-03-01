void print_variables(){

  if( accelerometer ){
    if (bluetooth){
      BTserial.print(acceleration[x_]);       
      BTserial.print("\t");
      BTserial.print(acceleration[y_]);        
      BTserial.print("\t");
      BTserial.print(acceleration[z_]);        
      BTserial.print("\t");
    }
    else{
      Serial.print(acceleration[x_]);       
      Serial.print("\t");
      Serial.print(acceleration[y_]);        
      Serial.print("\t");
      Serial.print(acceleration[z_]);        
      Serial.print("\t");
    }

    if( acceleration_mag ){
      if (bluetooth){
        BTserial.print(M);  
        BTserial.print("\t");
      }
      else{
        Serial.print(M);  
        Serial.print("\t");
      }
    }

      if( pedometer ){
        if ( bluetooth ){               
          BTserial.print(steps);
          BTserial.print("\t"); 
        }
        else{
          Serial.print(steps);
          Serial.print("\t");
        }
      }

    
      if( pace_monitor ){
        if( bluetooth ){
          BTserial.print(paceAve, 6); 
          BTserial.print("\t");
        }
        else{
          Serial.print(paceAve, 6); 
          Serial.print("\t");
        }
        
      }
  }


  if( resistance_meter ){
    if( bluetooth ){
      BTserial.print(R1);
      BTserial.print("\t");
    }
    else{
      Serial.print(R1);
      Serial.print("\t");
    } 
  }


  if( calc_resistivity ){
    if( bluetooth ){
      BTserial.print(resistivity_1);
      BTserial.print("\t");
    }
    else{
      Serial.print(resistivity_1);
      Serial.print("\t");
    }
  }


  if( bluetooth ){
      BTserial.print("\n");
    }
  else{
      Serial.print("\n");
    }

}

