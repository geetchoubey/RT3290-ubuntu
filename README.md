# RT3290-ubuntu
Install RT3290 bluetooth and wi-fi drivers on Ubuntu system. WORKING!

Steps :

    $ sudo make
    $ sudo make install
    $ sudo modprobe rtbth

Note: If you encounter an error at line @139:36 of #rtbth_core_bluez.c then replace (at line 139)

    os_ctrl->sco_tx_seq = bt_cb(skb)->control.txseq;

with

    //os_ctrl->sco_tx_seq = bt_cb(skb)->control.txseq; 
 
SAVE and repeat from step (2)