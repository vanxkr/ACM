#include <gtk/gtk.h>
#include <gdk/gdkkeysyms.h>
//#include <fakekey/fakekey.h>
//#include <X11/keysym.h>

Display* disp ;
FakeKey *fk;
GtkWidget *win = NULL;

static char *numkeyboard_display[]=
{
    "1\0", "2\0", "3\0", "+","4\0", "5\0", "6\0","-", "7\0", "8\0", "9\0", ".", "0\0",  "←\0", "→\0", "Backspace\0", "Delete\0", "Enter\0"
};

static gushort numkeyboard_send[] =
{
    XK_1, XK_2, XK_3, XK_plus, XK_4, XK_5, XK_6, XK_minus, XK_7, XK_8,  XK_9, XK_period, XK_0,  XK_Left, XK_Right, XK_BackSpace, XK_Delete, XK_Return
};



gboolean numbt_release (GtkWidget *widget, GdkEventButton *event,
        gpointer user_data)
{
    gint i = GPOINTER_TO_UINT(user_data);
    fakekey_press_keysym(fk, numkeyboard_send[i], 0);
    fakekey_release(fk);

    return TRUE;
}

void clicked_callback(GtkButton *button1, GtkWindow *window)
{

    gint j;
    GtkWidget *button[5];
    GtkWidget *vbox = gtk_vbox_new(FALSE, 5);
    GtkWidget *hbox[5];

    if(win)
    {
        gtk_widget_destroy (win);
        win = NULL ;
    }
    else
    {
        win = gtk_window_new (GTK_WINDOW_POPUP);
        hbox[0] = gtk_hbox_new(TRUE, 5);
        for (j = 0 ; j < 4; j++ ) {
            button[0] = gtk_button_new_with_label (numkeyboard_display[j]);
            gtk_box_pack_start_defaults(GTK_BOX(hbox[0]), button[0]);
            g_signal_connect(G_OBJECT(button[0]), "button-release-event",
                    G_CALLBACK(numbt_release), GUINT_TO_POINTER (j));
        }
        gtk_box_pack_start_defaults(GTK_BOX(vbox), hbox[0]);

        hbox[1] = gtk_hbox_new(TRUE, 5);
        for (j = 4 ; j < 8; j++ ) {
            button[1] = gtk_button_new_with_label (numkeyboard_display[j]);
            gtk_box_pack_start_defaults(GTK_BOX(hbox[1]), button[1]);
            g_signal_connect(G_OBJECT(button[1]), "button-release-event",
                    G_CALLBACK(numbt_release), GUINT_TO_POINTER (j));
        }
        gtk_box_pack_start_defaults(GTK_BOX(vbox), hbox[1]);

        hbox[2] = gtk_hbox_new(TRUE, 5);
        for (j = 8 ; j < 12; j++ ) {
            button[2] = gtk_button_new_with_label (numkeyboard_display[j]);
            gtk_box_pack_start_defaults(GTK_BOX(hbox[2]), button[2]);
            g_signal_connect(G_OBJECT(button[2]), "button-release-event",
                    G_CALLBACK(numbt_release), GUINT_TO_POINTER (j));
        }
        gtk_box_pack_start_defaults(GTK_BOX(vbox), hbox[2]);

        hbox[3] = gtk_hbox_new(TRUE, 5);
        for (j = 12 ; j < 15; j++ ) {
            button[3] = gtk_button_new_with_label (numkeyboard_display[j]);
            gtk_box_pack_start_defaults(GTK_BOX(hbox[3]), button[3]);
            g_signal_connect(G_OBJECT(button[3]), "button-release-event",
                    G_CALLBACK(numbt_release), GUINT_TO_POINTER (j));
        }
        gtk_box_pack_start_defaults(GTK_BOX(vbox), hbox[3]);

        hbox[4] = gtk_hbox_new(TRUE, 5);
        for (j = 15 ; j < 18; j++ ) {
            button[4] = gtk_button_new_with_label (numkeyboard_display[j]);
            gtk_box_pack_start_defaults(GTK_BOX(hbox[4]), button[4]);
            g_signal_connect(G_OBJECT(button[4]), "button-release-event",
                    G_CALLBACK(numbt_release), GUINT_TO_POINTER (j));
        }
        gtk_box_pack_start_defaults(GTK_BOX(vbox), hbox[4]);
        gtk_container_add(GTK_CONTAINER(win), vbox);

        gtk_window_move (GTK_WINDOW (win), 200, 200); /* 设置窗口位置 */
        gtk_widget_show_all(win);

    }

}

 int main(int argc, char *argv[])
{
     GtkWidget *window;
     GtkWidget *button;
     GtkWidget *entry;
     GtkWidget *vbox;

     gtk_init(&argc, &argv);
     window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
     gtk_window_set_title(GTK_WINDOW(window), "KeyBoard");
     gtk_window_set_default_size(GTK_WINDOW(window),400,300);

     disp = XOpenDisplay(NULL);//屏幕按键函数改成为内核驱动代发
     if( disp == NULL )
         return 1;
     fk = fakekey_init(disp);


     vbox = gtk_vbox_new(FALSE, 5);
     button = gtk_button_new_with_label("弹出键盘");
     gtk_widget_set_size_request(GTK_WIDGET(button),400,250);
     gtk_box_pack_start_defaults(GTK_BOX(vbox), button);

     entry = gtk_entry_new();
     gtk_box_pack_start_defaults(GTK_BOX(vbox), entry);
     gtk_widget_set_size_request(GTK_WIDGET(entry),400,50);

     g_signal_connect(GTK_OBJECT(window), "destroy",G_CALLBACK(gtk_main_quit), NULL);
     g_signal_connect(GTK_OBJECT(button), "clicked",G_CALLBACK(clicked_callback), window);
     gtk_container_add(GTK_CONTAINER(window), vbox);
     gtk_widget_show_all(window);

     gtk_main();
     return 0;
 }
