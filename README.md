# ESP32_FTPServer_SD
ESP32 FTP Server

このFTP Serverは、[Simple FTP Server for using esp8266 SPIFFs](https://github.com/nailbuster/esp8266FTPServer "Title")
を、ESP32 + SDカード用に移植したものです。

### 使い方 ###
 1. ESP32とSDカードを接続してください。私はここを参考にさせて頂きました。<br>
    	[大和通信の技術力 : 次はESP-32でSDカードも使えました。](http://daiwa-c.blog.jp/archives/1065230925.html "Title")
 2. スケッチのssidとpasswordを自分の環境に合わせて書き換えて下さい。<br>
 3. ESP32にスケッチを書き込み後、シリアルモニタを開くとIPアドレスが表示されるのでメモしておいて下さい。
 4. FTPクライアントからメモしたIPアドレスにアクセスしてください。<br>
    ユーザー名：esp32 パスワード：esp32 です。<br><br>
    FFFTPを使用した時の設定例<br>
![画像1](images/image1.png)<br><br>
![画像2](images/image2.png)<br><br>
![画像3](images/image3.png)<br><br>
![画像4](images/image4.png)<br><br>
![画像5](images/image5.png)<br><br>

 5. Windows10のエクスプローラを使ってドラッグ&ドロップでSDにファイルをアップロード/ダウンロードできます。<br>
    Windows10のエクスプローラから接続する時は ftp://esp32:esp32@192.168.XXX.XXX/ です。<br><br>
![画像6](images/image6.png)<br><br>


### 制限事項 ###
* サブディレクトリは使えません。<br>
* ファイルのタイムスタンプは固定です。<br>
<br><br>
