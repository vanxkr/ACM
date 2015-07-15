/* ��������ļ� interface.c */
#include <gtk/gtk.h>
#include "callbacks.h"
GtkWidget* create_menu (GtkAccelGroup* accel_group,GtkWidget*
                        window);
GtkWidget* create_toolbar (GtkWidget* window);
GtkWidget* create_window (void)
{
    GtkWidget* window;
    GtkWidget* text;
    GtkWidget* scrolledwin;
    GtkWidget* box;
    GtkWidget* statusbar;
    GtkWidget* menubar ;
    GtkWidget* toolbar ;
    GtkAccelGroup* accel_group ;
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window),"������Ӧ�ó��򴰿�");
    gtk_window_set_default_size(GTK_WINDOW(window),400,300);
    accel_group = gtk_accel_group_new();
    gtk_window_add_accel_group(GTK_WINDOW(window),accel_group);
    box = gtk_vbox_new(FALSE,0);
    gtk_container_add (GTK_CONTAINER (window), box);
    menubar = create_menu(accel_group,window);
    gtk_box_pack_start(GTK_BOX(box),menubar,0,0,0);
    toolbar = create_toolbar(window);
    gtk_box_pack_start(GTK_BOX(box),toolbar,0,1,0);
    scrolledwin = gtk_scrolled_window_new(NULL,NULL);
    text = gtk_text_view_new();
    gtk_box_pack_start(GTK_BOX(box),scrolledwin,TRUE,TRUE,0);
    gtk_container_add(GTK_CONTAINER(scrolledwin),text);
    gtk_text_view_set_editable(GTK_TEXT_VIEW(text),TRUE);
    statusbar = gtk_statusbar_new();
    gtk_box_pack_start(GTK_BOX(box),statusbar,FALSE,FALSE,0);
    gtk_widget_show_all(window);
    return window;
}
GtkWidget* create_menu (GtkAccelGroup* accel_group,GtkWidget*
                        window)
{
    GtkWidget* menubar;
    GtkWidget* menu;
    GtkWidget* editmenu;
    GtkWidget* helpmenu;
    GtkWidget* rootmenu;
    GtkWidget* menuitem;
    menu = gtk_menu_new();//�ļ��˵�
    menuitem = gtk_image_menu_item_new_from_stock
               (GTK_STOCK_NEW,accel_group);
    gtk_menu_shell_append(GTK_MENU_SHELL(menu),menuitem);
    g_signal_connect(G_OBJECT(menuitem),"activate",
                     G_CALLBACK(on_file_new_activate),NULL);
    menuitem = gtk_image_menu_item_new_from_stock
               (GTK_STOCK_OPEN,accel_group);
    gtk_menu_shell_append(GTK_MENU_SHELL(menu),menuitem);
    g_signal_connect(G_OBJECT(menuitem),"activate",
                     G_CALLBACK(on_file_new_activate),NULL);
    menuitem = gtk_image_menu_item_new_from_stock
               (GTK_STOCK_SAVE,accel_group);
    gtk_menu_shell_append(GTK_MENU_SHELL(menu),menuitem);
    menuitem = gtk_image_menu_item_new_from_stock
               (GTK_STOCK_SAVE_AS,accel_group);
    gtk_menu_shell_append(GTK_MENU_SHELL(menu),menuitem);
    menuitem = gtk_separator_menu_item_new();
    gtk_menu_shell_append(GTK_MENU_SHELL(menu),menuitem);
    menuitem = gtk_image_menu_item_new_from_stock
               (GTK_STOCK_QUIT,accel_group);
    gtk_menu_shell_append(GTK_MENU_SHELL(menu),menuitem);
    g_signal_connect(G_OBJECT(menuitem),"activate",
                     G_CALLBACK(on_window_delete_event),NULL);
    rootmenu = gtk_menu_item_new_with_label(g_locale_to_utf8(" �ļ� ", 6, NULL, NULL, NULL));
    gtk_widget_show(rootmenu);
    gtk_menu_item_set_submenu(GTK_MENU_ITEM(rootmenu),menu);
    menubar = gtk_menu_bar_new();
    gtk_menu_shell_append(GTK_MENU_SHELL(menubar),rootmenu);
    rootmenu = gtk_menu_item_new_with_label(g_locale_to_utf8(" �༭ ", 6, NULL, NULL, NULL));
    editmenu = gtk_menu_new();//�༭�˵�
    menuitem = gtk_image_menu_item_new_from_stock
               (GTK_STOCK_CUT,accel_group);
    gtk_menu_shell_append(GTK_MENU_SHELL(editmenu),menuitem);
    g_signal_connect(G_OBJECT(menuitem),"activate",
                     G_CALLBACK(on_edit_cut_activate),NULL);
    menuitem = gtk_image_menu_item_new_from_stock
               (GTK_STOCK_COPY,accel_group);
    gtk_menu_shell_append(GTK_MENU_SHELL(editmenu),menuitem);
    g_signal_connect(G_OBJECT(menuitem),"activate",
                     G_CALLBACK(on_edit_copy_activate),NULL);
    menuitem = gtk_image_menu_item_new_from_stock
               (GTK_STOCK_PASTE,accel_group);
    gtk_menu_shell_append(GTK_MENU_SHELL(editmenu),menuitem);
    g_signal_connect(G_OBJECT(menuitem),"activate",
                     G_CALLBACK(on_edit_paste_activate),NULL);
    menuitem = gtk_image_menu_item_new_from_stock
               (GTK_STOCK_FIND,accel_group);
    gtk_menu_shell_append(GTK_MENU_SHELL(editmenu),menuitem);
    g_signal_connect(G_OBJECT(menuitem),"activate",
                     G_CALLBACK(on_edit_find_activate),NULL);
    gtk_widget_show(rootmenu);
    gtk_menu_item_set_submenu(GTK_MENU_ITEM(rootmenu),editmenu);
    gtk_menu_shell_append(GTK_MENU_SHELL(menubar),rootmenu);
    rootmenu = gtk_menu_item_new_with_label(g_locale_to_utf8(" ���� ", 6, NULL, NULL, NULL));
    helpmenu = gtk_menu_new();
    menuitem = gtk_image_menu_item_new_from_stock
               (GTK_STOCK_HELP,accel_group);
    gtk_menu_shell_append(GTK_MENU_SHELL(helpmenu),menuitem);
    g_signal_connect(G_OBJECT(menuitem),"activate",
                     G_CALLBACK(on_help_help_activate),NULL);
    menuitem = gtk_menu_item_new_with_label(g_locale_to_utf8(" ����", 6, NULL, NULL, NULL));
    gtk_menu_shell_append(GTK_MENU_SHELL(helpmenu),menuitem);
    g_signal_connect(G_OBJECT(menuitem),"activate",
                     G_CALLBACK(on_help_about_activate),NULL);
    gtk_menu_item_set_submenu(GTK_MENU_ITEM(rootmenu),helpmenu);
    gtk_menu_shell_append(GTK_MENU_SHELL(menubar),rootmenu);
    return menubar ;
}
GtkWidget* create_toolbar (GtkWidget* window)
{
    GtkWidget* toolbar ;
    toolbar = gtk_toolbar_new();
    gtk_toolbar_insert_stock(GTK_TOOLBAR(toolbar),
                             GTK_STOCK_NEW,
                             g_locale_to_utf8("����һ�����ļ�", 6, NULL, NULL, NULL),
                             g_locale_to_utf8("�½�", 6, NULL, NULL, NULL),
                             GTK_SIGNAL_FUNC(on_file_new_activate),
                             window,-1);
    gtk_toolbar_insert_stock(GTK_TOOLBAR(toolbar),
                             GTK_STOCK_OPEN,
                             g_locale_to_utf8("��һ���ļ�", 6, NULL, NULL, NULL),
                             g_locale_to_utf8("��", 6, NULL, NULL, NULL),
                             GTK_SIGNAL_FUNC(on_file_open_activate),
                             toolbar,-1);
    gtk_toolbar_insert_stock(GTK_TOOLBAR(toolbar),
                             GTK_STOCK_SAVE,
                             g_locale_to_utf8("���浱ǰ�ļ�", 6, NULL, NULL, NULL),
                             g_locale_to_utf8("����", 6, NULL, NULL, NULL),
                             GTK_SIGNAL_FUNC(on_file_save_activate),
                             toolbar,-1);
    return toolbar;
}
