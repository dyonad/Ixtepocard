
//Bibliotecas
#include <SPI.h>
#include <MFRC522.h>
#include <ThreeWire.h> //INCLUSÃO DA BIBLIOTECA
#include <RtcDS1302.h> //INCLUSÃO DA BIBLIOTECA

int ledPin = 7; //PINO DIGITAL EM QUE O TERMINAL 'R' ESTÁ CONECTADO
 
//COMENTE A LINHA ABAIXO SE O LED RGB QUE ESTÁ UTILIZANDO É CATODO COMUM
#define COMMON_ANODE 
#define BUZZER 8
#define SS_PIN 10
#define RST_PIN 9

bool leProximoBloco;
bool erro;
const char* tipoBase = "PC0042";

ThreeWire myWire(4, 5, 2); //OBJETO DO TIPO ThreeWire
RtcDS1302<ThreeWire> Rtc(myWire); //OBJETO DO TIPO RtcDS1302
 
MFRC522 LeitorRFID(SS_PIN, RST_PIN);    // Cria uma nova instância para o leitor e passa os pinos como parâmetro

MFRC522::MIFARE_Key key;

void setup() {
        Serial.begin(9600);                 // Inicializa a comunicação Serial
        Rtc.Begin(); //INICIALIZA O RTC
        SPI.begin();                        // Inicializa comunicacao SPI 
         //clock.setDateTime(2020, 1, 15, 22, 37, 00);  
        //RtcDateTime compiled = RtcDateTime(__DATE__, __TIME__); //VARIÁVEL RECEBE DATA E HORA DE COMPILAÇÃO
       // RtcDateTime compiled = RtcDateTime("Feb 21 2021", "21:06:00");
//RtcDateTime compiled = RtcDateTime(2021, 2, 21, 10, 24, 00);

        //TesteRTC(compiled);
        LeitorRFID.PCD_Init();              // Inicializa o leitor RFID
        pinMode(ledPin, OUTPUT); //DEFINE O PINO COMO SAÍDA
        pinMode(BUZZER, OUTPUT);            // Declara o pino do buzzer como saída
        delay(4);                           // Optional delay. Some board do need more time after init to be ready, see Readme
        LeitorRFID.PCD_DumpVersionToSerial();  // Show details of PCD - MFRC522 Card Reader details
        leProximoBloco = true;
        erro = false;
        for (byte i = 0; i < 6; i++) key.keyByte[i] = 0xFF;

}

void loop() {
  
  GravaHoraBase();

}



void GravaHoraBase()
{
  //mensagem_inicial_cartao();
  //Aguarda cartao
  while ( ! LeitorRFID.PICC_IsNewCardPresent())
  {
    delay(100);
  }
  if ( ! LeitorRFID.PICC_ReadCardSerial())
  {
    return;
  }
  //Mostra UID na serial
  //Serial.print("UID da tag : ");
  String conteudo = "";
  byte letra;
  //for (byte i = 0; i < LeitorRFID.uid.size; i++)
  //{
  //  Serial.print(LeitorRFID.uid.uidByte[i] < 0x10 ? " 0" : " ");
  //  Serial.print(LeitorRFID.uid.uidByte[i], HEX);
  //  conteudo.concat(String(LeitorRFID.uid.uidByte[i]<0x10 ? " 0" : " "));
  //  conteudo.concat(String(LeitorRFID.uid.uidByte[i], HEX));
  //}
  //Serial.println();

  if (leProximoBloco == true){
    MostraDados(1,3);
  }
   if (leProximoBloco == true){
      MostraDados(2,3);
  }
   if (leProximoBloco == true){
      MostraDados(4,7);
    }
   if (leProximoBloco == true){
      MostraDados(5,7);
    }
   if (leProximoBloco == true){
      MostraDados(6,7);
    }
   if (leProximoBloco == true){
      MostraDados(8,11);
    }
   if (leProximoBloco == true){
      MostraDados(9,11);
    }
   if (leProximoBloco == true){
      MostraDados(10,11);
    }
   if (leProximoBloco == true){
      MostraDados(12,15);
    }
   if (leProximoBloco == true){
      MostraDados(13,15);
    }
   if (leProximoBloco == true){
      MostraDados(14,15);
    }
   if (leProximoBloco == true){
      MostraDados(16,19);
    }
   if (leProximoBloco == true){
      MostraDados(17,19);
    }
   if (leProximoBloco == true){
      MostraDados(18,19);
    }
   if (leProximoBloco == true){
      MostraDados(20,23);
    }
   if (leProximoBloco == true){
      MostraDados(21,23);
    }
   if (leProximoBloco == true){
      MostraDados(22,23);
    }
   if (leProximoBloco == true){
      MostraDados(24,27);
    }
   if (leProximoBloco == true){
      MostraDados(25,27);
    }
   if (leProximoBloco == true){
      MostraDados(26,27);
    }
   if (leProximoBloco == true){
      MostraDados(28,31);
    }
   if (leProximoBloco == true){
      MostraDados(29,31);
    }
   if (leProximoBloco == true){
      MostraDados(30,31);
    }
   if (leProximoBloco == true){
      MostraDados(32,35);
    }
   if (leProximoBloco == true){
      MostraDados(33,35);
    }
   if (leProximoBloco == true){
      MostraDados(34,35);
    }
   if (leProximoBloco == true){
      MostraDados(36,39);
    }
   if (leProximoBloco == true){
      MostraDados(37,39);
    }
   if (leProximoBloco == true){
      MostraDados(38,39);
    }
   if (leProximoBloco == true){
      MostraDados(40,43);
    }
   if (leProximoBloco == true){
      MostraDados(41,43);
    }
   if (leProximoBloco == true){
      MostraDados(42,43);
    }
   if (leProximoBloco == true){
      MostraDados(44,47);
    }
   if (leProximoBloco == true){
      MostraDados(45,47);
    }
   if (leProximoBloco == true){
      MostraDados(46,47);
    }
   if (leProximoBloco == true){
      MostraDados(48,51);
    }
   if (leProximoBloco == true){
      MostraDados(49,51);
    }
   if (leProximoBloco == true){
      MostraDados(50,51);
    }
   if (leProximoBloco == true){
      MostraDados(52,55);
    }
   if (leProximoBloco == true){
      MostraDados(53,55);
    }
   if (leProximoBloco == true){
      MostraDados(54,55);
    }
   if (leProximoBloco == true){
      MostraDados(56,59);
    }
   if (leProximoBloco == true){
      MostraDados(57,59);
    }
   if (leProximoBloco == true){
      MostraDados(58,59);
    }
   if (leProximoBloco == true){
      MostraDados(60,63);
    }
   if (leProximoBloco == true){
      MostraDados(61,63);
    }
   if (leProximoBloco == true){
      MostraDados(62,63);
    }  

   if (erro == false){
      efeitoPermitido();
    }  

   if (erro == true){
      efeitoNegado();
    }  

  erro = false;
  leProximoBloco = true;
  
  // Halt PICC
  LeitorRFID.PICC_HaltA();
  // Stop encryption on PCD
  LeitorRFID.PCD_StopCrypto1();
  delay(500);
  //mensageminicial();
}

void MostraDados(byte blockAddr,byte trailerBlock )
{
  //Obtem os dados do setor 1, bloco 4 = Nome
  byte sector         = 1;
  byte status;
  byte buffer[60];
  byte size = sizeof(buffer);
  String texto;
 
  //Autenticacao usando chave A
  status=LeitorRFID.PCD_Authenticate(MFRC522::PICC_CMD_MF_AUTH_KEY_A,
                                  trailerBlock, &key, &(LeitorRFID.uid));
  if (status != MFRC522::STATUS_OK) {
    Serial.print(F("PCD_Authenticate() failed: "));
    Serial.println(LeitorRFID.GetStatusCodeName(status));
    erro = true;
    return;
  }
  status = LeitorRFID.MIFARE_Read(blockAddr, buffer, &size);
  if (status != MFRC522::STATUS_OK) {
    Serial.print(F("MIFARE_Read() failed: "));
    Serial.println(LeitorRFID.GetStatusCodeName(status));
    erro = true;
  }
  //Mostra os dados do nome no Serial Monitor e LCD
  //lcd.clear();
  //lcd.setCursor(0, 0);
  //Serial.print("PC");
  //Serial.print(blockAddr);
  //Serial.print(" = ");
  /*
  for (byte i = 0; i < 16; i++)
  {
    texto = texto + char(buffer[i]);
    //Serial.println(texto);
   // Serial.print(char(buffer[i]));
     //lcd.write(char(buffer[i]));
  }
*/
  texto = char(buffer[0]);   
  if (texto == "#"){
    
      leProximoBloco = false;
      erro = false;
      modo_gravacao(blockAddr);
    }else{ 
      erro = true;
    }
  
  //Serial.println();
  }

#define countof(a) (sizeof(a) / sizeof(a[0]))

void modo_gravacao(byte blockAddr){

  byte buffer[60];
  byte block = blockAddr;
  byte status, len;
  //String data; 
  //Serial.setTimeout(20000L) ;
  
  //data = "001h232545d2303";
  
  RtcDateTime dt = Rtc.GetDateTime();
  
  char datestring[11]; //VARIÁVEL ARMAZENA AS INFORMAÇÕES DE DATA E HORA
 
snprintf_P(datestring, 
            countof(datestring),
            PSTR("%02u%02u%02u%02u%02u"), //FORMATO DE EXIBIÇÃO DAS INFORMAÇÕES
            dt.Day(), //DIA
            dt.Month(), //MÊS
            dt.Hour(), //HORA
            dt.Minute(), //MINUTOS
            dt.Second() ); //SEGUNDOS
    Serial.print(datestring); //IMPRIME NO MONITOR SERIAL AS INFORMAÇÕES


  char* date_with_tipobase;
  date_with_tipobase = malloc(strlen(tipoBase)+1+4); /* make space for the new string (should check the return value ...) */
  strcpy(date_with_tipobase, tipoBase); /* copy name into the new var */
  strcat(date_with_tipobase, datestring); /* add the extension */
  
  strcpy((char *)buffer,date_with_tipobase);

  //Serial.println(F("Autenticacao usando chave A..."));
  status=LeitorRFID.PCD_Authenticate(MFRC522::PICC_CMD_MF_AUTH_KEY_A,
                                    block, &key, &(LeitorRFID.uid));
  if (status != MFRC522::STATUS_OK) {
    Serial.print(F("PCD_Authenticate() failed: "));
    Serial.println(LeitorRFID.GetStatusCodeName(status));
    erro = true;
    return;
  }
  
  //data.getBytes(buffer, 16);
  //Grava no bloco 1
  status = LeitorRFID.MIFARE_Write(block, buffer, 16);
  if (status != MFRC522::STATUS_OK) {
    Serial.print(F("MIFARE_Write() failed: "));
    Serial.println(LeitorRFID.GetStatusCodeName(status));
    erro = true;
    return;
  }
 
  LeitorRFID.PICC_HaltA(); // Halt PICC
  LeitorRFID.PCD_StopCrypto1();  // Stop encryption on PCD
  //delay(500);
 
}

void efeitoPermitido(){  
  int qtd_bips = 2; //definindo a quantidade de bips
  for(int j=0; j<qtd_bips; j++){
    //Ligando o buzzer com uma frequência de 1500 hz e ligando o led verde.
    tone(BUZZER,1500);
    digitalWrite(ledPin,HIGH);
    delay(100);
    //Desligando o buzzer e led verde. 
    digitalWrite(ledPin,LOW);     
    noTone(BUZZER);
    delay(100);
  }  
}
 
void efeitoNegado(){  
  int qtd_bips = 1;  //definindo a quantidade de bips
  for(int j=0; j<qtd_bips; j++){   
    //Ligando o buzzer com uma frequência de 500 hz e ligando o led vermelho.
    tone(BUZZER,500);
    digitalWrite(ledPin,HIGH);
    delay(100);
    //Desligando o buzzer e led verde. 
    digitalWrite(ledPin,LOW); 
    
    //Desligando o buzzer e o led vermelho.
    noTone(BUZZER);
    delay(500);
  }  
}
